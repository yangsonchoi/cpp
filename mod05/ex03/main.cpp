// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>

#include "ex03/Bureaucrat.hpp"
#include "ex03/AForm.hpp"
#include "ex03/ShrubberyCreationForm.hpp"
#include "ex03/RobotomyRequestForm.hpp"
#include "ex03/PresidentialPardonForm.hpp"
#include "ex03/Intern.hpp"

using std::cout;
using std::endl;
using std::cerr;
using std::string;
using std::exception;

void checkleak() {
  system("leaks InternNobody");
}

int main(void) {
  atexit(checkleak);

  Intern nobody;
  Bureaucrat yachoi("Yachoi", 1);
  Bureaucrat ean("Ean", 75);

  Form* f1 = nobody.MakeForm(P_REQUEST, "Viridian Forest");
  Form* f2 = nobody.MakeForm(R_REQUEST, "Gurren Lagann");
  Form* f3 = nobody.MakeForm(S_REQUEST, "Princess");
  cout << endl;

  cout << yachoi << endl
    << ean << endl;
  cout << endl;

  cout << *f1 << endl
    << *f2 << endl
    << *f3 << endl;
  cout << endl;

  yachoi.SignForm(*f1);
  ean.SignForm(*f1);
  ean.SignForm(*f2);
  yachoi.SignForm(*f2);
  yachoi.SignForm(*f3);
  cout << endl;

  cout << *f1 << endl
    << *f2 << endl
    << *f3 << endl;
  cout << endl;

  ean.ExecuteForm(*f1);
  cout << endl;
  ean.ExecuteForm(*f2);
  cout << endl;
  yachoi.ExecuteForm(*f2);
  cout << endl;
  yachoi.ExecuteForm(*f2);
  cout << endl;
  yachoi.ExecuteForm(*f3);
  cout << endl;

  delete f1;
  delete f2;
  delete f3;

  return 0;
}
