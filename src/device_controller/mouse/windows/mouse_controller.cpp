#include "mouse_controller.h"

#include <Windows.h>

#include "rd_log.h"

namespace crossdesk {
namespace {

LONG NormalizeAbsoluteMouseCoordinate(int value, int origin, int size) {
  if (size <= 1) {
    return 0;
  }

  const int maximum = origin + size - 1;
  const int clamped_value =
      value < origin ? origin : (value > maximum ? maximum : value);
  const long long relative_value =
      static_cast<long long>(clamped_value - origin) * 65535;
  return static_cast<LONG>(relative_value / (size - 1));
}

INPUT BuildAbsoluteMouseMoveInput(int x, int y) {
  INPUT input = {0};
  input.type = INPUT_MOUSE;

  const int virtual_left = GetSystemMetrics(SM_XVIRTUALSCREEN);
  const int virtual_top = GetSystemMetrics(SM_YVIRTUALSCREEN);
  const int virtual_width = GetSystemMetrics(SM_CXVIRTUALSCREEN);
  const int virtual_height = GetSystemMetrics(SM_CYVIRTUALSCREEN);
  input.mi.dx =
      NormalizeAbsoluteMouseCoordinate(x, virtual_left, virtual_width);
  input.mi.dy =
      NormalizeAbsoluteMouseCoordinate(y, virtual_top, virtual_height);
  input.mi.dwFlags =
      MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_VIRTUALDESK;
  return input;
}

}  // namespace

MouseController::MouseController() {}

MouseController::~MouseController() {}

int MouseController::Init(std::vector<DisplayInfo> display_info_list) {
  display_info_list_ = display_info_list;

  return 0;
}

int MouseController::Destroy() { return 0; }

int MouseController::SendMouseCommand(RemoteAction remote_action,
                                      int display_index) {
  if (display_index < 0 ||
      display_index >= static_cast<int>(display_info_list_.size())) {
    LOG_WARN("Mouse command skipped, invalid display_index={}, displays={}",
             display_index, display_info_list_.size());
    return -1;
  }

  INPUT ip = {0};

  if (remote_action.type == ControlType::mouse) {
    ip.type = INPUT_MOUSE;
    ip.mi.dx =
        (LONG)(remote_action.m.x * display_info_list_[display_index].width) +
        display_info_list_[display_index].left;
    ip.mi.dy =
        (LONG)(remote_action.m.y * display_info_list_[display_index].height) +
        display_info_list_[display_index].top;

    switch (remote_action.m.flag) {
      case MouseFlag::left_down:
        ip.mi.dwFlags = MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_ABSOLUTE;
        break;
      case MouseFlag::left_up:
        ip.mi.dwFlags = MOUSEEVENTF_LEFTUP | MOUSEEVENTF_ABSOLUTE;
        break;
      case MouseFlag::right_down:
        ip.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_ABSOLUTE;
        break;
      case MouseFlag::right_up:
        ip.mi.dwFlags = MOUSEEVENTF_RIGHTUP | MOUSEEVENTF_ABSOLUTE;
        break;
      case MouseFlag::middle_down:
        ip.mi.dwFlags = MOUSEEVENTF_MIDDLEDOWN | MOUSEEVENTF_ABSOLUTE;
        break;
      case MouseFlag::middle_up:
        ip.mi.dwFlags = MOUSEEVENTF_MIDDLEUP | MOUSEEVENTF_ABSOLUTE;
        break;
      case MouseFlag::wheel_vertical:
        ip.mi.dwFlags = MOUSEEVENTF_WHEEL;
        ip.mi.mouseData = remote_action.m.s * 120;
        break;
      case MouseFlag::wheel_horizontal:
        ip.mi.dwFlags = MOUSEEVENTF_HWHEEL;
        ip.mi.mouseData = remote_action.m.s * 120;
        break;
      default:
        ip.mi.dwFlags = MOUSEEVENTF_MOVE;
        break;
    }

    ip.mi.time = 0;

    if (!SetCursorPos(ip.mi.dx, ip.mi.dy)) {
      LOG_WARN("SetCursorPos failed for mouse x={}, y={}, flag={}, err={}",
               ip.mi.dx, ip.mi.dy, static_cast<int>(remote_action.m.flag),
               GetLastError());
      return -1;
    }

    if (ip.mi.dwFlags == MOUSEEVENTF_MOVE) {
      // SetCursorPos alone does not restore a cursor hidden while typing.
      // This best-effort event supplies mouse activity without changing the
      // successful position update if secure-desktop policy rejects it.
      INPUT move_input = BuildAbsoluteMouseMoveInput(ip.mi.dx, ip.mi.dy);
      SendInput(1, &move_input, sizeof(INPUT));
    } else {
      UINT sent = SendInput(1, &ip, sizeof(INPUT));
      if (sent != 1) {
        LOG_WARN(
            "SendInput failed for mouse x={}, y={}, wheel={}, flag={}, err={}",
            ip.mi.dx, ip.mi.dy, remote_action.m.s,
            static_cast<int>(remote_action.m.flag), GetLastError());
        return -1;
      }
    }
  }

  return 0;
}
}  // namespace crossdesk
