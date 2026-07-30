#ifndef CROSSDESK_MACHINE_IDENTITY_H_
#define CROSSDESK_MACHINE_IDENTITY_H_

#include <atomic>
#include <condition_variable>
#include <mutex>
#include <string>
#include <thread>

namespace crossdesk {

class ConfigCenter;

// Generates and persists a unique machine ID and password, then periodically
// pings the relay server to signal liveness.
class MachineIdentity {
 public:
  MachineIdentity();
  ~MachineIdentity();

  // Load or generate machine ID and password. Returns true if a new ID was
  // generated (first run).
  bool Initialize(ConfigCenter* config_center);

  // Start the background polling thread.
  void StartPolling();

  // Stop the background polling thread.
  void StopPolling();

  const std::string& GetMachineId() const { return machine_id_; }
  const std::string& GetPassword() const { return password_; }

 private:
  void PollThread();
  void GenerateMachineId();
  void GeneratePassword();

  ConfigCenter* config_center_ = nullptr;
  std::string machine_id_;
  std::string password_;
  std::atomic<bool> running_{false};
  std::thread poll_thread_;
  std::mutex mutex_;
  std::condition_variable cv_;

  static constexpr int kPollIntervalSeconds = 600;  // 10 minutes
};

}  // namespace crossdesk

#endif  // CROSSDESK_MACHINE_IDENTITY_H_