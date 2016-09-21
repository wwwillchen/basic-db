#ifndef SRC_BASIC_DB_H_
#define SRC_BASIC_DB_H_

#include <string>
#include <unordered_map>

#include "status-codes.h"

class BasicDB {
 public:
  StatusCodes set(std::string key, std::string value);
  std::string get(std::string key);

 private:
  std::unordered_map<std::string, std::string> map_;
};
#endif  // SRC_BASIC_DB_H_