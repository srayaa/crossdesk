#ifdef _WIN32
#ifdef CROSSDESK_DEBUG
#pragma comment(linker, "/subsystem:\"console\"")
#else
#pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")
#endif
#endif

#include <charconv>
#include <cstring>
#include <filesystem>
#include <iostream>
#include <memory>
#include <string>
#include <thread>

#ifdef _WIN32
#include <cstdio>

#include "service_host.h"
#endif

#include "config_center.h"
#include "daemon.h"
#include "path_manager.h"
#if defined(_WIN32) && defined(CROSSDESK_WIN7_COMPAT)
#include "platform.h"
#endif
#include "render.h"

#ifdef _WIN32
namespace {

void EnsureConsoleForCli() {
  static bool console_ready = false;
  if (console_ready) {
    return;
  }

  if (!AttachConsole(ATTACH_PARENT_PROCESS)) {
    DWORD error = GetLastError();
    if (error != ERROR_ACCESS_DENIED) {
      AllocConsole();
    }
  }

  FILE* stream = nullptr;
  freopen_s(&stream, "CONOUT$", "w", stdout);
  freopen_s(&stream, "CONOUT$", "w", stderr);
  freopen_s(&stream, "CONIN$", "r", stdin);
  SetConsoleOutputCP(CP_UTF8);
  console_ready = true;
}

void PrintServiceCliUsage() {
  std::cout
      << "CrossDesk service management commands\n"
      << "  --service-install    Install the sibling crossdesk_service.exe\n"
      << "  --service-uninstall  Remove the installed Windows service\n"
      << "  --service-start      Start the Windows service\n"
      << "  --service-stop       Stop the Windows service\n"
      << "  --service-sas        Ask the service to send Secure Attention "
         "Sequence\n"
      << "  --service-ping       Ping the service over named pipe IPC\n"
      << "  --service-status     Query service runtime status\n"
      << "  --service-help       Show this help\n";
}

std::wstring GetCurrentExecutablePathW() {
  wchar_t path[MAX_PATH] = {0};
  DWORD length = GetModuleFileNameW(nullptr, path, MAX_PATH);
  if (length == 0 || length >= MAX_PATH) {
    return L"";
  }
  return std::wstring(path, length);
}

std::filesystem::path GetSiblingServiceExecutablePath() {
  std::wstring current_executable = GetCurrentExecutablePathW();
  if (current_executable.empty()) {
    return {};
  }

  return std::filesystem::path(current_executable).parent_path() /
         L"crossdesk_service.exe";
}

std::filesystem::path GetServiceDataDirectory() {
  crossdesk::PathManager path_manager("CrossDesk");
  std::filesystem::path data_dir = path_manager.GetCachePath();
  std::error_code error;
  if (data_dir.is_relative()) {
    data_dir = std::filesystem::absolute(data_dir, error);
  }
  if (!error) {
    std::filesystem::create_directories(data_dir, error);
  }
  if (error || !std::filesystem::is_directory(data_dir, error)) {
    return {};
  }
  return data_dir.lexically_normal();
}

bool IsServiceCliCommand(const char* arg) {
  if (arg == nullptr) {
    return false;
  }

  return std::strcmp(arg, "--service-install") == 0 ||
         std::strcmp(arg, "--service-uninstall") == 0 ||
         std::strcmp(arg, "--service-start") == 0 ||
         std::strcmp(arg, "--service-stop") == 0 ||
         std::strcmp(arg, "--service-sas") == 0 ||
         std::strcmp(arg, "--service-ping") == 0 ||
         std::strcmp(arg, "--service-status") == 0 ||
         std::strcmp(arg, "--service-help") == 0;
}

void TryStartManagedWindowsService() {
  std::filesystem::path service_path = GetSiblingServiceExecutablePath();
  if (service_path.empty() || !std::filesystem::exists(service_path)) {
    return;
  }

  if (!crossdesk::IsCrossDeskServiceInstalled()) {
    return;
  }

  crossdesk::StartCrossDeskService();
}

void PrepareManagedWindowsServiceForUi() {
  crossdesk::QueryCrossDeskService("prepare-ui", 7000);
}

const char* FindCommandLineValue(int argc, char* argv[],
                                 const char* option_name) {
  for (int i = 1; i + 1 < argc; ++i) {
    if (std::strcmp(argv[i], option_name) == 0) {
      return argv[i + 1];
    }
  }
  return nullptr;
}

int RunServiceAgent(int argc, char* argv[]) {
  const char* stop_event_argument =
      FindCommandLineValue(argc, argv, "--stop-event");
  const char* service_pid_argument =
      FindCommandLineValue(argc, argv, "--service-pid");
  if (stop_event_argument == nullptr || stop_event_argument[0] == '\0' ||
      service_pid_argument == nullptr || service_pid_argument[0] == '\0') {
    return ERROR_INVALID_PARAMETER;
  }

  DWORD service_process_id = 0;
  const char* service_pid_end =
      service_pid_argument + std::strlen(service_pid_argument);
  auto [parsed_end, parse_error] =
      std::from_chars(service_pid_argument, service_pid_end, service_process_id);
  if (parse_error != std::errc() || parsed_end != service_pid_end ||
      service_process_id == 0) {
    return ERROR_INVALID_PARAMETER;
  }

  std::wstring stop_event_name(stop_event_argument,
                               stop_event_argument +
                                   std::strlen(stop_event_argument));
  HANDLE stop_event =
      OpenEventW(SYNCHRONIZE, FALSE, stop_event_name.c_str());
  if (stop_event == nullptr) {
    return static_cast<int>(GetLastError());
  }

  HANDLE service_process =
      OpenProcess(SYNCHRONIZE, FALSE, service_process_id);
  if (service_process == nullptr) {
    DWORD error = GetLastError();
    CloseHandle(stop_event);
    return static_cast<int>(error);
  }

  HANDLE render_done_event = CreateEventW(nullptr, TRUE, FALSE, nullptr);
  if (render_done_event == nullptr) {
    DWORD error = GetLastError();
    CloseHandle(service_process);
    CloseHandle(stop_event);
    return static_cast<int>(error);
  }

  crossdesk::Render render(true);
  std::thread stop_monitor(
      [&render, stop_event, service_process, render_done_event]() {
        HANDLE events[] = {stop_event, service_process, render_done_event};
        DWORD wait_result =
            WaitForMultipleObjects(3, events, FALSE, INFINITE);
        if (wait_result == WAIT_OBJECT_0 ||
            wait_result == WAIT_OBJECT_0 + 1) {
          render.RequestQuit();
        }
      });

  int result = render.Run();
  SetEvent(render_done_event);
  stop_monitor.join();
  CloseHandle(render_done_event);
  CloseHandle(service_process);
  CloseHandle(stop_event);
  return result;
}

int HandleServiceCliCommand(const std::string& command) {
  EnsureConsoleForCli();

  if (command == "--service-help") {
    PrintServiceCliUsage();
    return 0;
  }

  if (command == "--service-install") {
    std::filesystem::path service_path = GetSiblingServiceExecutablePath();
    if (service_path.empty()) {
      std::cerr << "Failed to locate crossdesk_service.exe" << std::endl;
      return 1;
    }
    if (!std::filesystem::exists(service_path)) {
      std::cerr << "Service binary not found: " << service_path.string()
                << std::endl;
      return 1;
    }

    std::wstring client_path = GetCurrentExecutablePathW();
    std::filesystem::path data_dir = GetServiceDataDirectory();
    bool success = !client_path.empty() && !data_dir.empty() &&
                   crossdesk::InstallCrossDeskService(
                       service_path.wstring(), client_path,
                       data_dir.wstring());
    std::cout << (success ? "install ok" : "install failed") << std::endl;
    return success ? 0 : 1;
  }

  if (command == "--service-uninstall") {
    bool success = crossdesk::UninstallCrossDeskService();
    std::cout << (success ? "uninstall ok" : "uninstall failed") << std::endl;
    return success ? 0 : 1;
  }

  if (command == "--service-start") {
    bool success = crossdesk::StartCrossDeskService();
    std::cout << (success ? "start ok" : "start failed") << std::endl;
    return success ? 0 : 1;
  }

  if (command == "--service-stop") {
    bool success = crossdesk::StopCrossDeskService();
    std::cout << (success ? "stop ok" : "stop failed") << std::endl;
    return success ? 0 : 1;
  }

  if (command == "--service-sas") {
    std::cout << crossdesk::QueryCrossDeskService("sas") << std::endl;
    return 0;
  }

  if (command == "--service-ping") {
    std::cout << crossdesk::QueryCrossDeskService("ping") << std::endl;
    return 0;
  }

  if (command == "--service-status") {
    std::cout << crossdesk::QueryCrossDeskService("status") << std::endl;
    return 0;
  }

  PrintServiceCliUsage();
  return 1;
}

}  // namespace
#endif

int main(int argc, char* argv[]) {
#ifdef _WIN32
#ifdef CROSSDESK_WIN7_COMPAT
  crossdesk::InitializeWindowsCompat();
#endif

  if (argc > 1 && IsServiceCliCommand(argv[1])) {
    return HandleServiceCliCommand(argv[1]);
  }

  if (argc > 1 && std::strcmp(argv[1], "--service-agent") == 0) {
    return RunServiceAgent(argc, argv);
  }
#endif

  // check if running as child process
  bool is_child = false;
  for (int i = 1; i < argc; i++) {
    if (strcmp(argv[i], "--child") == 0) {
      is_child = true;
      break;
    }
  }

  if (is_child) {
    // child process: run render directly
#ifdef _WIN32
    TryStartManagedWindowsService();
    PrepareManagedWindowsServiceForUi();
#endif
    crossdesk::Render render;
    render.Run();
    return 0;
  }

#ifdef _WIN32
  TryStartManagedWindowsService();
  PrepareManagedWindowsServiceForUi();
#endif

  bool enable_daemon = false;
  auto path_manager = std::make_unique<crossdesk::PathManager>("CrossDesk");
  if (path_manager) {
    std::string cache_path = path_manager->GetCachePath().string();
    crossdesk::ConfigCenter config_center(cache_path + "/config.ini");
    enable_daemon = config_center.IsEnableDaemon();
  }

  if (enable_daemon) {
    // start daemon with restart monitoring
    Daemon daemon("CrossDesk");

    // define main loop function: run render and stop daemon on normal exit
    Daemon::MainLoopFunc main_loop = [&daemon]() {
      crossdesk::Render render;
      render.Run();
      daemon.stop();
    };

    // start daemon and return result
    bool success = daemon.start(main_loop);
    return success ? 0 : 1;
  }

  // run without daemon: direct execution
  crossdesk::Render render;
  render.Run();
  return 0;
}
