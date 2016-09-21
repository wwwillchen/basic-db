#include <iostream>

#include "basic-db.h"

int main(int argc __attribute__((unused)),
         char* argv[] __attribute__((unused))) {
  std::cout << "hi" << std::endl;
  BasicDB db;
  auto status = db.set("Will", "Chen");
  std::cout << "Status" << status << std::endl;
  std::cout << db.get("Will");
}