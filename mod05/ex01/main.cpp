// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>

#include "ex01/Bureaucrat.hpp"
#include "ex01/Form.hpp"

using std::cout;
using std::endl;
using std::cerr;
using std::string;
using std::exception;

int main(void) {
  Bureaucrat yachoi("Yachoi", 1);
  Bureaucrat ean("Ean", 75);
  Form f1("f1", 30, 30);
  Form f2(f1);
  Form f3("f3", 75, 50);
  cout << endl;

  cout << yachoi << endl
    << ean << endl;
  cout << endl;

  cout << f1 << endl
    << f2 << endl
    << f3 << endl;
  cout << endl;

  yachoi.SignForm(f1);
  ean.SignForm(f2);
  ean.SignForm(f3);
  cout << endl;

  cout << f1 << endl
    << f2 << endl
    << f3 << endl;
  cout << endl;
  return 0;
}
