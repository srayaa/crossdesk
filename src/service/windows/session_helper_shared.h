/*
 * @Author: DI JUNKUN
 * @Date: 2026-04-21
 * Copyright (c) 2026 by DI JUNKUN, All Rights Reserved.
 */

#ifndef _SESSION_HELPER_SHARED_H_
#define _SESSION_HELPER_SHARED_H_

#include <Windows.h>
#include <WtsApi32.h>

#include <cstdint>
#include <string>

namespace crossdesk {

inline constexpr wchar_t kCrossDeskSessionHelperPipePrefix[] =
    L"\\\\.\\pipe\\CrossDeskSessionHelper-";
inline constexpr wchar_t kCrossDeskSecureInputHelperPipePrefix[] =
    L"\\\\.\\pipe\\CrossDeskSecureInputHelper-";
inline constexpr char kCrossDeskSessionHelperStatusCommand[] = "status";
inline constexpr char kCrossDeskSecureInputKeyboardCommandPrefix[] =
    "keyboard:";
inline constexpr char kCrossDeskSecureInputMouseCommandPrefix[] = "mouse:";
inline constexpr char kCrossDeskSecureInputCaptureCommandPrefix[] = "capture:";
inline constexpr char kCrossDeskSecureInputCaptureStartCommandPrefix[] =
    "capture-start:";
inline constexpr char kCrossDeskSecureInputCaptureStopCommand[] =
    "capture-stop";
inline constexpr DWORD kCrossDeskSecureInputPipeBufferBytes = 16 * 1024 * 1024;
inline constexpr wchar_t kCrossDeskSecureDesktopFrameMappingPrefix[] =
    L"Global\\CrossDeskSecureDesktopFrame-";
inline constexpr wchar_t kCrossDeskSecureDesktopFrameReadyEventPrefix[] =
    L"Global\\CrossDeskSecureDesktopFrameReady-";
inline constexpr uint32_t kCrossDeskSecureDesktopFrameMagic = 0x50444358;
inline constexpr uint32_t kCrossDeskSecureDesktopFrameVersion = 1;

inline bool UsesReversedWtsSessionStateFlags() {
#if defined(CROSSDESK_WIN7_COMPAT)
  static const bool uses_reversed_flags = []() {
    using RtlGetVersionFunction = LONG(WINAPI*)(OSVERSIONINFOW*);
    HMODULE ntdll = GetModuleHandleW(L"ntdll.dll");
    if (ntdll == nullptr) {
      return false;
    }

    auto rtl_get_version = reinterpret_cast<RtlGetVersionFunction>(
        GetProcAddress(ntdll, "RtlGetVersion"));
    if (rtl_get_version == nullptr) {
      return false;
    }

    OSVERSIONINFOW version{};
    version.dwOSVersionInfoSize = sizeof(version);
    if (rtl_get_version(&version) != 0) {
      return false;
    }

    // Windows 7 and Server 2008 R2 report these two WTS flags reversed.
    return version.dwMajorVersion == 6 && version.dwMinorVersion == 1;
  }();
  return uses_reversed_flags;
#else
  return false;
#endif
}

inline bool DecodeWtsSessionLockState(LONG session_flags,
                                      bool* session_locked_out) {
  if (session_locked_out == nullptr) {
    return false;
  }

  const bool uses_reversed_flags = UsesReversedWtsSessionStateFlags();
  const LONG locked_flag = uses_reversed_flags ? WTS_SESSIONSTATE_UNLOCK
                                               : WTS_SESSIONSTATE_LOCK;
  const LONG unlocked_flag = uses_reversed_flags ? WTS_SESSIONSTATE_LOCK
                                                 : WTS_SESSIONSTATE_UNLOCK;
  if (session_flags == locked_flag) {
    *session_locked_out = true;
    return true;
  }
  if (session_flags == unlocked_flag) {
    *session_locked_out = false;
    return true;
  }
  return false;
}

#pragma pack(push, 1)
struct CrossDeskSecureDesktopFrameHeader {
  uint32_t magic;
  uint32_t version;
  int32_t left;
  int32_t top;
  uint32_t width;
  uint32_t height;
  uint32_t payload_size;
};

struct CrossDeskSecureDesktopSharedFrameHeader {
  uint32_t magic;
  uint32_t version;
  volatile uint32_t writing;
  uint32_t sequence;
  int32_t left;
  int32_t top;
  uint32_t width;
  uint32_t height;
  uint32_t payload_size;
  uint32_t buffer_size;
};
#pragma pack(pop)

inline std::wstring GetCrossDeskSessionHelperPipeName(DWORD session_id) {
  return std::wstring(kCrossDeskSessionHelperPipePrefix) +
         std::to_wstring(session_id);
}

inline std::wstring GetCrossDeskSecureInputHelperPipeName(DWORD session_id) {
  return std::wstring(kCrossDeskSecureInputHelperPipePrefix) +
         std::to_wstring(session_id);
}

inline std::wstring GetCrossDeskSecureDesktopFrameMappingName(
    DWORD session_id) {
  return std::wstring(kCrossDeskSecureDesktopFrameMappingPrefix) +
         std::to_wstring(session_id);
}

inline std::wstring GetCrossDeskSecureDesktopFrameReadyEventName(
    DWORD session_id) {
  return std::wstring(kCrossDeskSecureDesktopFrameReadyEventPrefix) +
         std::to_wstring(session_id);
}

}  // namespace crossdesk

#endif
