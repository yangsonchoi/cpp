// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>

#include "ex05/Harl.hpp"

using std::cout;
using std::endl;

int main(void) {
  Harl h;

  h.complain("error");
  h.complain("DEBUG");
  h.complain("INFO");
  h.complain("WARNING");
  h.complain("ERROR");
  return 0;
}
