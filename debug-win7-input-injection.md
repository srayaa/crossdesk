# Debug Session: win7-input-injection
- **Status**: [OPEN]
- **Issue**: On Windows 7 x64 in VMware, remote video works but mouse and keyboard input have no effect. The remote mouse cursor flickers continuously while a connection is active. The standard build works on newer Windows versions.
- **Debug Server**: Not started
- **Log File**: .dbg/trae-debug-log-win7-input-injection.ndjson

## Reproduction Steps
1. Install the Win7-compatible CrossDesk build in a Windows 7 x64 VMware virtual machine.
2. Connect from another machine and confirm that remote video is visible.
3. Move or click the remote mouse and type on the remote keyboard.
4. Observe that the cursor flickers without moving and keyboard input has no effect.

## Hypotheses & Verification
| ID | Hypothesis | Likelihood | Effort | Evidence |
|----|------------|------------|--------|----------|
| A | VMware Tools absolute-pointer integration competes with successful CrossDesk mouse injection. | Medium | Medium | Pending: compare injection results and cursor positions; this alone does not explain keyboard failure. |
| B | Remote input packets do not reach the controlled machine's input handler. | Medium | Low | Pending: instrument the first receiver-side input dispatch point. |
| C | Win7 rejects the input injection API calls. | High | Low | Pending: record API return values and `GetLastError()`. |
| D | Input is injected from the wrong Windows session, window station, or desktop. | High | Medium | Pending: record process/session IDs and active input desktop context. |
| E | Win7 compatibility branches or service/session-helper differences bypass the normal input path. | Medium | Medium | Pending: compare the Win7 control flow with the standard path. |

## Log Evidence
No runtime evidence collected yet.

## Verification Conclusion
Pending receiver-side input-path inspection and pre-fix runtime evidence.
