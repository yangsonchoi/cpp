// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>

#include "ex05/Harl.hpp"

using std::cout;
using std::endl;

int main(void) {
  Harl h;

  cout << "--- Input \"debug\" ---" << endl;
  h.complain("debug");
  cout << "--- Input \"bacon\" ---" << endl;
  h.complain("bacon");
  cout << "--- Input \"burger\" ---" << endl;
  h.complain("burger");
  cout << "--- Input \"DEBUG\" ---" << endl;
  h.complain("DEBUG");
  cout << "--- Input \"INFO\" ---" << endl;
  h.complain("INFO");
  cout << "--- Input \"WARNING\" ---" << endl;
  h.complain("WARNING");
  cout << "--- Input \"ERROR\" ---" << endl;
  h.complain("ERROR");
  return 0;
}
