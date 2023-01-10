// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>

#include "ex02/Bureaucrat.hpp"
#include "ex02/AForm.hpp"
#include "ex02/ShrubberyCreationForm.hpp"
#include "ex02/RobotomyRequestForm.hpp"
#include "ex02/PresidentialPardonForm.hpp"

using std::cout;
using std::endl;
using std::cerr;
using std::string;
using std::exception;

int main(void) {
  Bureaucrat yachoi("Yachoi", 1);
  Bureaucrat ean("Ean", 75);
  ShrubberyCreationForm f1("Tree");
  RobotomyRequestForm f2("Rumble");
  PresidentialPardonForm f3("MB");
  cout << endl;

  cout << yachoi << endl
    << ean << endl;
  cout << endl;

  cout << f1 << endl
    << f2 << endl
    << f3 << endl;
  cout << endl;

  yachoi.SignForm(f1);
  ean.SignForm(f1);
  ean.SignForm(f2);
  yachoi.SignForm(f2);
  yachoi.SignForm(f3);
  cout << endl;

  cout << f1 << endl
    << f2 << endl
    << f3 << endl;
  cout << endl;

  ean.ExecuteForm(f1);
  cout << endl;
  ean.ExecuteForm(f2);
  cout << endl;
  yachoi.ExecuteForm(f2);
  cout << endl;
  yachoi.ExecuteForm(f2);
  cout << endl;
  yachoi.ExecuteForm(f3);

  return 0;
}
