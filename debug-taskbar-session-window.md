# Debug Session: taskbar-session-window
- **Status**: [FIXED]
- **Issue**: A non-responsive taskbar window appears after a remote connection is established and disappears when the session ends.
- **Debug Server**: http://127.0.0.1:7777/event
- **Log File**: .dbg/trae-debug-log-taskbar-session-window.ndjson

## Reproduction Steps
1. Start CrossDesk on Windows.
2. Establish a remote connection.
3. Observe the extra taskbar window while the connection is active.
4. End the remote connection and observe that the taskbar window disappears.

## Hypotheses & Verification
| ID | Hypothesis | Likelihood | Effort | Evidence |
|----|------------|------------|--------|----------|
| A | The taskbar item is the server session window and its final HWND styles do not exclude it from the taskbar. | High | Low | Confirmed: pre-fix line 3 has a visible server HWND with `WS_EX_APPWINDOW` and no owner. |
| B | The taskbar item belongs to the stream window rather than the server session window. | Medium | Low | Rejected: no stream window was created during the host-side reproduction. |
| C | The taskbar item belongs to a helper process started for the connection. | Medium | Medium | Rejected: the server HWND belongs to the active `crossdesk.exe` PID. |
| D | The server window has tool-window styles, but its owner or visibility transition makes the shell retain a taskbar item. | Medium | Low | Rejected: pre-fix `exStyle=0x40118` contains `WS_EX_APPWINDOW` and not `WS_EX_TOOLWINDOW`; owner is null. |

## Log Evidence
- Pre-fix line 1: Slint `show()` is asynchronous; the server native HWND is not yet available immediately after the call.
- Pre-fix line 3: before session teardown, server HWND `920624` is visible and belongs to PID `34912`.
- Pre-fix line 3: server `exStyle=262424` (`0x40118`) includes `WS_EX_APPWINDOW`, excludes `WS_EX_TOOLWINDOW`, and has no owner.
- Post-fix lines 3, 7, 11, and 15: four separate server HWNDs all have `exStyle=408` (`0x198`), which includes `WS_EX_TOOLWINDOW` and excludes `WS_EX_APPWINDOW`.
- Post-fix lines 4, 8, 12, and 16: the corrected style remains intact until each server window is destroyed.

## Verification Conclusion
Root cause confirmed and fixed. The active Slint server window was created asynchronously as an unowned application window. The fix waits for the native HWND, hides it while replacing `WS_EX_APPWINDOW` with `WS_EX_TOOLWINDOW`, refreshes the frame, and restores it without activation. Four post-fix connection cycles retained the corrected style, and the user confirmed that the taskbar window no longer appears.
