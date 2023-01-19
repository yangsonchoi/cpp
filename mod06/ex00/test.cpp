// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::endl;

int main(void) {

  std::string a("32f");

  char* b;
  b = NULL;

  double c;
  c = std::strtod(a.c_str(), &b);


  cout << "b: " << b << endl;
  cout << std::strcmp(b, "f") << endl;
  cout << "c: " << c << endl;
  
  return 0;
}
