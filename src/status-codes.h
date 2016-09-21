#ifndef SRC_STATUS_CODES_H_
#define SRC_STATUS_CODES_H_

#include <iostream>
#include <type_traits>

enum class StatusCodes {
  Error,
  Success,
};

std::ostream& operator<<(std::ostream& os, const StatusCodes& obj) {
  os << static_cast<std::underlying_type<StatusCodes>::type>(obj);
  return os;
}
#endif  // SRC_STATUS_CODES_H_