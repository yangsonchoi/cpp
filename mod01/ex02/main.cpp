// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
  string hi("HI THIS IS BRAIN");
  string* stringPTR = &hi;
  string& stringREF = hi;

  cout << &hi << endl;
  cout << stringPTR << endl;
  cout << &stringREF << endl;

  cout << hi << endl;
  cout << *stringPTR << endl;
  cout << stringREF << endl;

  return 0;
}
