#include <iostream>

#include "animal.h"

int main(int argc, char* argv[]) {
  std::cout << "hi" << std::endl;
  Animal animal;
  std::cout << "age" << animal.age();
}