#include <cstdint>
#include <cstdlib>
#include <filesystem>
#include <iostream>
#include <string>

#include "path_manager.h"

#ifdef _WIN32
#include <windows.h>
#elif defined(__APPLE__)
#include <limits.h>
#include <mach-o/dyld.h>
#else
#include <limits.h>
#include <unistd.h>
#endif

namespace {

std::filesystem::path GetExecutableDirectory() {
#ifdef _WIN32
  wchar_t buffer[MAX_PATH] = {};
  DWORD length = GetModuleFileNameW(nullptr, buffer, MAX_PATH);
  if (length == 0 || length == MAX_PATH) {
    return {};
  }
  return std::filesystem::path(buffer).parent_path();
#elif defined(__APPLE__)
  char buffer[PATH_MAX] = {};
  uint32_t size = sizeof(buffer);
  if (_NSGetExecutablePath(buffer, &size) != 0) {
    return {};
  }
  return std::filesystem::weakly_canonical(buffer).parent_path();
#else
  char buffer[PATH_MAX] = {};
  ssize_t length = readlink("/proc/self/exe", buffer, sizeof(buffer) - 1);
  if (length <= 0) {
    return {};
  }
  buffer[length] = '\0';
  return std::filesystem::path(buffer).parent_path();
#endif
}

bool ExpectEqual(const char* name, const std::filesystem::path& actual,
                 const std::filesystem::path& expected) {
  if (actual.lexically_normal() == expected.lexically_normal()) {
    return true;
  }

  std::cerr << name << " mismatch\n"
            << "  expected: " << expected.string() << "\n"
            << "  actual:   " << actual.string() << "\n";
  return false;
}

bool SetDataRootOverride(const std::filesystem::path* path) {
#ifdef _WIN32
  return _wputenv_s(L"CROSSDESK_DATA_DIR",
                    path == nullptr ? L"" : path->c_str()) == 0;
#else
  if (path == nullptr) {
    return unsetenv("CROSSDESK_DATA_DIR") == 0;
  }
  return setenv("CROSSDESK_DATA_DIR", path->c_str(), 1) == 0;
#endif
}

}  // namespace

int main() {
  const std::filesystem::path exe_dir = GetExecutableDirectory();
  if (exe_dir.empty()) {
    std::cerr << "failed to resolve executable directory\n";
    return 1;
  }

  if (!SetDataRootOverride(nullptr)) {
    std::cerr << "failed to clear CROSSDESK_DATA_DIR\n";
    return 1;
  }

  crossdesk::PathManager path_manager("CrossDesk");
  const std::filesystem::path expected_data = exe_dir / "data";
  const std::filesystem::path expected_logs = exe_dir / "logs";

  bool ok = true;
  ok &= ExpectEqual("config path", path_manager.GetConfigPath(), expected_data);
  ok &= ExpectEqual("cache path", path_manager.GetCachePath(), expected_data);
  ok &= ExpectEqual("log path", path_manager.GetLogPath(), expected_logs);

  const std::filesystem::path service_data = exe_dir / "service data";
  if (!SetDataRootOverride(&service_data)) {
    std::cerr << "failed to set CROSSDESK_DATA_DIR\n";
    return 1;
  }
  ok &= ExpectEqual("overridden config path", path_manager.GetConfigPath(),
                    service_data);
  ok &= ExpectEqual("overridden cache path", path_manager.GetCachePath(),
                    service_data);
  ok &= ExpectEqual("overridden log path", path_manager.GetLogPath(),
                    service_data / "logs");

  return ok ? 0 : 1;
}
