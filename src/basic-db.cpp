#include "basic-db.h"

#include <string>
#include <unordered_map>

#include "status-codes.h"

StatusCodes BasicDB::set(std::string key, std::string value) {
  StatusCodes status;
  auto result = map_.find(key);
  if (result != map_.end()) {
    status = StatusCodes::Error;
  } else {
    status = StatusCodes::Success;
  }
  map_[key] = value;
  return status;
}

std::string BasicDB::get(std::string key) { return map_[key]; }
