# Debug Session: win7-vm-keyboard
- **Status**: [RESOLVED]
- **Issue**: Windows 编译客户端控制本机 VMware 中的 Win7 时键盘不可操作；网页客户端控制同一 Win7 正常。
- **Debug Server**: http://192.168.126.1:7777/event
- **Log File**: .dbg/trae-debug-log-win7-vm-keyboard.ndjson

## Reproduction Steps
1. 在宿主机启动编译后的 CrossDesk Windows 客户端。
2. 连接本机 VMware 中运行 CrossDesk 的 Win7。
3. 聚焦远程画面并输入字母、数字和修饰键组合。
4. 对比网页客户端控制同一 Win7 的键盘行为。

## Hypotheses & Verification
| ID | Hypothesis | Likelihood | Effort | Evidence |
|----|------------|------------|--------|----------|
| A | 流窗口焦点状态未启动原生键盘钩子 | High | Low | Disproved: `capturer_started=true`, `stream_focused=true` |
| B | 原生钩子捕获事件，但可靠数据流发送失败或目标会话错误 | High | Low | Refined: no B events, so keys never reached `SendKeyCommand`; reliable heartbeat delivery works |
| C | Win7 收到键盘事件，但 SendInput 注入失败 | Medium | Low | Not reached: no keyboard command was sent |
| D | 桌面客户端传入的源扫描码在 Win7/VMware 中解释异常 | Medium | Medium | Not reached: no keyboard command was sent |
| E | 键盘心跳状态在按键后错误释放或覆盖状态 | Low | Medium | Disproved: heartbeat reconciliation remained empty and consistent |

## Log Evidence
Instrumentation ready:
- A: keyboard capturer heartbeat and focus/start state.
- B: captured key metadata, target session, and reliable send result.
- C-D: remote key receipt metadata and normal desktop injection result.
- E: keyboard heartbeat reconciliation counts.

Pre-fix builds:
- Host: `scripts/windows/crossdesk-win-x64-2.1.2-debug.exe`
- Win7 VM: `scripts/windows/crossdesk-win-x64-2.1.2-debug_win7.exe`
- Win7 PE import audit: passed.

Pre-fix evidence:
- Host emitted 10 capturer heartbeats with native hook started and stream focused.
- Win7 received and reconciled 8 corresponding keyboard-state heartbeats.
- No captured-key send event (B) and no remote-key injection event (C-D) was emitted while the issue reproduced.
- Failure boundary: host native keyboard hook, before `SendKeyCommand`.
- Second probe: count raw Win32 hook callbacks/injected filters and compare them with Slint stream-window key events.
- Second-probe host build: `scripts/windows/crossdesk-win-x64-2.1.2-debug2.exe`.

Second-probe evidence:
- All 10 native-hook samples reported `hook_callback_count=0`, `hook_injected_count=0`, and `hook_dispatched_count=0`.
- The Slint stream window reported 16 key events for `a`, `1`, Shift, `A`, and arrow keys during the same reproduction.
- Root cause: `SetWindowsHookEx(WH_KEYBOARD_LL)` reports success in the Slint client, but its callback is not dispatched. The successful hook result disables the working Slint window-event path, so every local key is discarded before `SendKeyCommand`.
- Fix under verification: use the Slint stream-window keyboard backend on Windows instead of the non-dispatching low-level hook.
- Post-fix host build: `scripts/windows/crossdesk-win-x64-2.1.2-fix1.exe`.
- Automated verification: `slint_ui_smoke_test` and `keyboard_state_protocol_test` passed.

Post-fix partial evidence:
- Letters, digits, and Shift combinations traverse the complete path and inject successfully.
- Arrow events are sent with the correct virtual keys and scan codes, but with `extended=false`: Left=`VK_LEFT/0x4B`, Right=`VK_RIGHT/0x4D`, Up=`VK_UP/0x48`.
- Win7 consequently interprets those scan codes as numpad 4/6/8; Down maps to numpad 2 for the same reason.
- Follow-up fix: prefer `LookupWindowsKeyMetadataFromVk` for known extended keys before using `MapVirtualKeyW` as a fallback.
- Extended-key verification build: `scripts/windows/crossdesk-win-x64-2.1.2-fix2.exe`.
- Regression coverage now asserts Left and Down scan codes are extended; protocol and Slint UI tests pass.

## Verification Conclusion
Resolved:
- User confirmed the `fix2` build handles letters, digits, modifiers, arrows, Home, End, and Delete correctly.
- The Windows controller now uses Slint stream-window keyboard events instead of the non-dispatching low-level hook.
- Known extended keys use deterministic scan-code metadata before the platform mapping fallback.
- Protocol and Slint UI tests pass.
