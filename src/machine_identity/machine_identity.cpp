#include "machine_identity.h"

#include <httplib.h>

#include <algorithm>
#include <chrono>
#include <cctype>
#include <random>
#include <sstream>

#include "config_center.h"
#include "rd_log.h"

namespace crossdesk {

namespace {

constexpr const char* kMachineIdHost = "http://sray.cn";
constexpr const char* kMachineIdPath = "/test.txt";

std::string GenerateRandomDigits(int length) {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(0, 9);
  std::string result;
  result.reserve(length);
  for (int i = 0; i < length; ++i) {
    result.push_back(static_cast<char>('0' + dist(gen)));
  }
  return result;
}

}  // namespace

MachineIdentity::MachineIdentity() = default;

MachineIdentity::~MachineIdentity() { StopPolling(); }

bool MachineIdentity::Initialize(ConfigCenter* config_center) {
  config_center_ = config_center;
  if (!config_center_) {
    return false;
  }

  machine_id_ = config_center_->GetMachineId();
  password_ = config_center_->GetMachinePassword();

  bool generated = false;
  if (machine_id_.empty()) {
    GenerateMachineId();
    config_center_->SetMachineId(machine_id_);
    generated = true;
    LOG_INFO("Generated new machine ID: {}", machine_id_);
  }

  if (password_.empty()) {
    GeneratePassword();
    config_center_->SetMachinePassword(password_);
    generated = true;
    LOG_INFO("Generated new machine password");
  }

  return generated;
}

void MachineIdentity::StartPolling() {
  if (running_.exchange(true)) {
    return;  // Already running
  }
  poll_thread_ = std::thread(&MachineIdentity::PollThread, this);
  LOG_INFO("Machine identity polling started (id={})", machine_id_);
}

void MachineIdentity::StopPolling() {
  if (!running_.exchange(false)) {
    return;  // Already stopped
  }
  cv_.notify_all();
  if (poll_thread_.joinable()) {
    poll_thread_.join();
  }
  LOG_INFO("Machine identity polling stopped");
}

void MachineIdentity::PollThread() {
  while (running_.load()) {
    {
      std::unique_lock<std::mutex> lk(mutex_);
      if (!cv_.wait_for(lk, std::chrono::seconds(kPollIntervalSeconds),
                        [this] { return !running_.load(); })) {
        // Timeout reached, proceed with polling
      }
      if (!running_.load()) {
        break;
      }
    }

    // Perform HTTP GET request
    httplib::Client cli(kMachineIdHost);
    cli.set_connection_timeout(5);
    cli.set_read_timeout(5);

    std::string path = std::string(kMachineIdPath) + "?mid=" + machine_id_ +
                       "&pw=" + password_;

    auto result = cli.Get(path);
    if (result && result->status == 200) {
      LOG_DEBUG("Machine identity poll succeeded: {}", machine_id_);
    } else {
      int error_code = result ? result->status : 0;
      LOG_WARN("Machine identity poll failed: id={}, error={}", machine_id_,
               error_code);
    }
  }
}

void MachineIdentity::GenerateMachineId() {
  // Generate a 9-digit machine ID (similar to peer ID format)
  machine_id_ = GenerateRandomDigits(9);
}

void MachineIdentity::GeneratePassword() {
  // Generate a 6-digit password
  password_ = GenerateRandomDigits(6);
}

}  // namespace crossdesk