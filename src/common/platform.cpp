#include "platform.h"

#include <cstdlib>
#include <cstring>

#include "rd_log.h"

#ifdef _WIN32
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iphlpapi.h>
#include <Windows.h>

#if defined(CROSSDESK_WIN7_COMPAT)
namespace {

// Forward declaration of RtlGetVersion from ntdll.dll.
// RtlGetVersion takes a pointer to an OSVERSIONINFO-like structure.
typedef LONG(WINAPI* RtlGetVersionPtr)(void*);

// Minimal RTL_OSVERSIONINFOW definition for RtlGetVersion call.
// We use a unique name to avoid conflicts with SDK headers.
struct CrossdeskOsVersionInfo {
  DWORD dwOSVersionInfoSize;
  DWORD dwMajorVersion;
  DWORD dwMinorVersion;
  DWORD dwBuildNumber;
  DWORD dwPlatformId;
  WCHAR szCSDVersion[128];
  WORD wServicePackMajor;
  WORD wServicePackMinor;
  WORD wSuiteMask;
  BYTE wProductType;
  BYTE wReserved;
};

// cached after first call
struct WindowsVersionInfo {
  bool initialized = false;
  DWORD major = 0;
  DWORD minor = 0;
  DWORD build = 0;
};

WindowsVersionInfo GetWindowsVersionInfo() {
  static WindowsVersionInfo info;
  if (info.initialized) {
    return info;
  }
  info.initialized = true;

  // RtlGetVersion is available on NT-based Windows versions including Win7.
  // GetVersionEx is deprecated and may return incorrect values on newer Windows.
  HMODULE ntdll = GetModuleHandleW(L"ntdll.dll");
  if (!ntdll) {
    ntdll = LoadLibraryW(L"ntdll.dll");
  }
  if (!ntdll) {
    return info;
  }

  auto rtl_get_version = reinterpret_cast<RtlGetVersionPtr>(
      GetProcAddress(ntdll, "RtlGetVersion"));
  if (!rtl_get_version) {
    return info;
  }

  CrossdeskOsVersionInfo osvi{};
  osvi.dwOSVersionInfoSize = sizeof(osvi);
  if (rtl_get_version(&osvi) == 0) {
    info.major = osvi.dwMajorVersion;
    info.minor = osvi.dwMinorVersion;
    info.build = osvi.dwBuildNumber;
  }
  return info;
}

}  // namespace

namespace crossdesk {

bool IsWindows10OrLater() {
  auto info = GetWindowsVersionInfo();
  // Windows 10 = version 10.0, build 10240+
  return info.major >= 10;
}

bool IsWindows8OrLater() {
  auto info = GetWindowsVersionInfo();
  // Windows 8 = version 6.2
  return (info.major > 6) || (info.major == 6 && info.minor >= 2);
}

void InitializeWindowsCompat() {
  HMODULE user32 = GetModuleHandleW(L"user32.dll");
  if (!user32) {
    user32 = LoadLibraryW(L"user32.dll");
  }
  if (!user32) {
    return;
  }

  // Try SetProcessDpiAwarenessContext (Win10 1703+)
  typedef BOOL(WINAPI* SetProcessDpiAwarenessContextFn)(void*);
  auto set_ctx = reinterpret_cast<SetProcessDpiAwarenessContextFn>(
      GetProcAddress(user32, "SetProcessDpiAwarenessContext"));
  if (set_ctx &&
      set_ctx(reinterpret_cast<void*>(static_cast<INT_PTR>(-4)))) {
    LOG_INFO("Windows compatibility: DPI awareness set to PerMonitorV2");
    return;
  }

  HMODULE shcore = LoadLibraryW(L"shcore.dll");
  if (shcore) {
    typedef HRESULT(WINAPI* SetProcessDpiAwarenessFn)(int);
    auto set_aware = reinterpret_cast<SetProcessDpiAwarenessFn>(
        GetProcAddress(shcore, "SetProcessDpiAwareness"));
    const HRESULT result = set_aware ? set_aware(2) : E_NOTIMPL;
    FreeLibrary(shcore);
    if (SUCCEEDED(result)) {
      LOG_INFO("Windows compatibility: DPI awareness set to PerMonitor");
      return;
    }
  }

  // Fallback: SetProcessDPIAware (Vista+)
  typedef BOOL(WINAPI* SetProcessDPIAwareFn)();
  auto set_dpi_aware = reinterpret_cast<SetProcessDPIAwareFn>(
      GetProcAddress(user32, "SetProcessDPIAware"));
  if (set_dpi_aware && set_dpi_aware()) {
    LOG_INFO("Windows compatibility: DPI awareness set to System DPI aware");
  }
}

}  // namespace crossdesk
#endif
#elif defined(__APPLE__)
#include <ifaddrs.h>
#include <net/if_dl.h>
#include <net/if_types.h>
#include <sys/socket.h>
#include <sys/types.h>
#elif defined(__linux__)
#include <fcntl.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <unistd.h>
#endif

namespace crossdesk {

std::string GetMac() {
  char mac_addr[16];
  int len = 0;
#ifdef _WIN32
  IP_ADAPTER_INFO adapterInfo[16];
  DWORD bufferSize = sizeof(adapterInfo);
  DWORD result = GetAdaptersInfo(adapterInfo, &bufferSize);
  if (result == ERROR_SUCCESS) {
    PIP_ADAPTER_INFO adapter = adapterInfo;
    while (adapter) {
      for (UINT i = 0; i < adapter->AddressLength; i++) {
        len += sprintf_s(mac_addr + len, sizeof(mac_addr) - len, "%.2X",
                         adapter->Address[i]);
      }
      break;
    }
  }
#elif __APPLE__
  std::string if_name = "en0";

  struct ifaddrs* addrs;
  struct ifaddrs* cursor;
  const struct sockaddr_dl* dlAddr;

  if (!getifaddrs(&addrs)) {
    cursor = addrs;
    while (cursor != 0) {
      const struct sockaddr_dl* socAddr =
          (const struct sockaddr_dl*)cursor->ifa_addr;
      if ((cursor->ifa_addr->sa_family == AF_LINK) &&
          (socAddr->sdl_type == IFT_ETHER) &&
          strcmp(if_name.c_str(), cursor->ifa_name) == 0) {
        dlAddr = (const struct sockaddr_dl*)cursor->ifa_addr;
        const unsigned char* base =
            (const unsigned char*)&dlAddr->sdl_data[dlAddr->sdl_nlen];
        for (int i = 0; i < dlAddr->sdl_alen; i++) {
          len +=
              snprintf(mac_addr + len, sizeof(mac_addr) - len, "%.2X", base[i]);
        }
      }
      cursor = cursor->ifa_next;
    }
    freeifaddrs(addrs);
  }
#elif __linux__
  int sock = socket(AF_INET, SOCK_DGRAM, 0);
  if (sock < 0) {
    return "";
  }
  struct ifreq ifr;
  struct ifconf ifc;
  char buf[1024];
  ifc.ifc_len = sizeof(buf);
  ifc.ifc_buf = buf;
  if (ioctl(sock, SIOCGIFCONF, &ifc) < 0) {
    close(sock);
    return "";
  }
  struct ifreq* it = ifc.ifc_req;
  const struct ifreq* const end = it + (ifc.ifc_len / sizeof(struct ifreq));
  for (; it != end; ++it) {
    std::strcpy(ifr.ifr_name, it->ifr_name);
    if (ioctl(sock, SIOCGIFFLAGS, &ifr) < 0) {
      continue;
    }
    if (ifr.ifr_flags & IFF_LOOPBACK) {
      continue;
    }
    if (ioctl(sock, SIOCGIFHWADDR, &ifr) < 0) {
      continue;
    }
    std::string mac_address;
    for (int i = 0; i < 6; ++i) {
      len += sprintf(mac_addr + len, "%.2X", ifr.ifr_hwaddr.sa_data[i] & 0xff);
    }
    break;
  }
  close(sock);
#endif
  return mac_addr;
}

std::string GetHostName() {
  char hostname[256];
#ifdef _WIN32
  WSADATA wsaData;
  if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
    LOG_ERROR("WSAStartup failed");
    return "";
  }
  if (gethostname(hostname, sizeof(hostname)) == SOCKET_ERROR) {
    LOG_ERROR("gethostname failed: {}", WSAGetLastError());
    WSACleanup();
    return "";
  }
  WSACleanup();
#else
  if (gethostname(hostname, sizeof(hostname)) == -1) {
    LOG_ERROR("gethostname failed");
    return "";
  }
#endif
  return hostname;
}

bool IsWaylandSession() {
#if defined(__linux__) && !defined(__APPLE__)
  const char* session_type = std::getenv("XDG_SESSION_TYPE");
  if (session_type) {
    if (std::strcmp(session_type, "wayland") == 0 ||
        std::strcmp(session_type, "Wayland") == 0) {
      return true;
    }
    if (std::strcmp(session_type, "x11") == 0 ||
        std::strcmp(session_type, "X11") == 0) {
      return false;
    }
  }

  const char* wayland_display = std::getenv("WAYLAND_DISPLAY");
  return wayland_display && wayland_display[0] != '\0';
#else
  return false;
#endif
}
}  // namespace crossdesk
