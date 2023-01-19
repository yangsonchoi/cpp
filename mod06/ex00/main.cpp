// Copyright 2023 Yangson Choi. All rights reserved.

#include <string>
#include <exception>
#include <iostream>

#include "ex00/Conversion.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "usage: ./convert [ Convert Input ]" << std::endl;
  } else {
    try {
      std::cout << Conversion(argv[1]);
    } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
    }
  }
  return 0;
}
