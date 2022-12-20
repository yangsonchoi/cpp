// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>

#include "ex06/Harl.hpp"

using std::cout;
using std::endl;

int main(int argc, char** argv) {
  if (argc != 2) {
    cout << "usage : ./harlFilter [ LEVEL ]" << endl;
    return EXIT_FAILURE;
  }
  Harl h;
  h.complain(argv[1]);
  return 0;
}
