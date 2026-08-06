#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

namespace {

std::filesystem::path FindRepoRoot() {
  std::filesystem::path current = std::filesystem::current_path();
  while (!current.empty()) {
    if (std::filesystem::exists(current / "xmake.lua") &&
        std::filesystem::exists(current /
                                "src/service/windows/service_host.cpp")) {
      return current;
    }
    current = current.parent_path();
  }
  return {};
}

std::string ReadFile(const std::filesystem::path& path) {
  std::ifstream file(path, std::ios::binary);
  if (!file) {
    return {};
  }

  std::ostringstream stream;
  stream << file.rdbuf();
  return stream.str();
}

std::string ExtractSection(const std::string& value, const std::string& begin,
                           const std::string& end) {
  const size_t begin_position = value.find(begin);
  if (begin_position == std::string::npos) {
    return {};
  }
  const size_t end_position = value.find(end, begin_position + begin.size());
  if (end_position == std::string::npos) {
    return value.substr(begin_position);
  }
  return value.substr(begin_position, end_position - begin_position);
}

bool ExpectContains(const char* name, const std::string& value,
                    const std::string& expected) {
  if (value.find(expected) != std::string::npos) {
    return true;
  }

  std::cerr << name << " missing expected text: " << expected << "\n";
  return false;
}

bool ExpectNotContains(const char* name, const std::string& value,
                       const std::string& unexpected) {
  if (value.find(unexpected) == std::string::npos) {
    return true;
  }

  std::cerr << name << " contains unexpected text: " << unexpected << "\n";
  return false;
}

}  // namespace

int main() {
  const std::filesystem::path repo_root = FindRepoRoot();
  if (repo_root.empty()) {
    std::cerr << "failed to locate repository root\n";
    return 1;
  }

  const std::string app_main = ReadFile(repo_root / "src/app/main.cpp");
  const std::string gui_application =
      ReadFile(repo_root / "src/gui/application/gui_application.cpp");
  const std::string gui_application_h =
      ReadFile(repo_root / "src/gui/application/gui_application.h");
  const std::string path_manager =
      ReadFile(repo_root / "src/path_manager/path_manager.cpp");
  const std::string service_host =
      ReadFile(repo_root / "src/service/windows/service_host.cpp");
  const std::string service_monitor = ExtractSection(
      service_host, "void CrossDeskServiceHost::ClientProcessMonitorLoop()",
      "bool CrossDeskServiceHost::LoadBackgroundAgentConfiguration()");
  const std::string service_stop = ExtractSection(
      service_host, "bool StopCrossDeskService(DWORD timeout_ms)",
      "bool UninstallCrossDeskService()");
  const std::string service_uninstall = ExtractSection(
      service_host, "bool UninstallCrossDeskService()",
      "std::string QueryCrossDeskService(");

  bool ok = true;
  ok &= ExpectContains("service_host.cpp", service_host, "SERVICE_AUTO_START");
  ok &= ExpectContains("service_host.cpp", service_host,
                       "ChangeServiceConfigW(");
  ok &= ExpectContains("service_host.cpp", service_host,
                       "kCrossDeskServiceClientPathValue[] = L\"ClientPath\"");
  ok &= ExpectContains("service_host.cpp", service_host,
                       "kCrossDeskServiceDataDirValue[] = L\"DataDir\"");
  ok &= ExpectContains("service_host.cpp", service_host,
                       "CreateSessionSystemToken(session_id");
  ok &= ExpectContains("service_host.cpp", service_host,
                       "CreateProcessAsUserW(");
  ok &= ExpectContains("service_host.cpp", service_host,
                       "L\"CROSSDESK_DATA_DIR\"");
  ok &= ExpectContains("service_host.cpp", service_host,
                       "L\" --service-pid \"");
  ok &= ExpectContains("service_host.cpp", service_host,
                       "normalized == \"prepare-ui\"");
  ok &= ExpectContains("service uninstall", service_uninstall,
                       "DeleteServiceConfiguration();");
  ok &= ExpectNotContains("service stop", service_stop,
                          "DeleteServiceConfiguration();");
  ok &= ExpectContains("service monitor", service_monitor,
                       "LaunchBackgroundAgent(active_session_id)");
  ok &= ExpectContains("service monitor", service_monitor,
                       "StopBackgroundAgent();");
  ok &= ExpectNotContains("service monitor", service_monitor, "RequestStop();");

  ok &= ExpectContains("main.cpp", app_main, "\"--service-agent\"");
  ok &= ExpectContains("main.cpp", app_main, "\"--service-pid\"");
  ok &= ExpectContains("main.cpp", app_main,
                       "OpenProcess(SYNCHRONIZE, FALSE, service_process_id)");
  ok &= ExpectContains("main.cpp", app_main, "crossdesk::Render render(true)");
  ok &= ExpectContains("main.cpp", app_main,
                       "PrepareManagedWindowsServiceForUi();");
  ok &= ExpectContains("gui_application.cpp", gui_application,
                       "if (!background_agent_)");
  ok &= ExpectContains("gui_application.cpp", gui_application,
                       "if (background_agent_)");
  ok &= ExpectContains("gui_application.cpp", gui_application,
                       "quit_requested_.store(true");
  ok &= ExpectContains("gui_application.h", gui_application_h,
                       "std::atomic<bool> quit_requested_");
  ok &= ExpectContains("path_manager.cpp", path_manager,
                       "CROSSDESK_DATA_DIR");

  return ok ? 0 : 1;
}
