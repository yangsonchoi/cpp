// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex03/Intern.hpp"

#include <string>
#include <iostream>
#include <exception>

#include "ex03/AForm.hpp"
#include "ex03/ShrubberyCreationForm.hpp"
#include "ex03/RobotomyRequestForm.hpp"
#include "ex03/PresidentialPardonForm.hpp"

using std::string;
using std::cout;
using std::endl;
using std::cerr;
using std::exception;

const char* Intern::TypeNotFoundExcenption::what(void) const throw() {
  return ("Type Not Found.");
}

const char* const Intern::p_form_type[kFormCount]
  = {S_REQUEST, R_REQUEST, P_REQUEST};

Intern::Intern() {
  cout << "Intern Default Constructor" << endl;
}

Intern::Intern(const Intern& i) { static_cast<void>(i); }

Intern& Intern::operator=(const Intern& i) {
  static_cast<void>(i);
  return *this;
}

Intern::~Intern() {
  cout << "Intern Destructor" << endl;
}

Form* Intern::MakeForm(const string& type, const string& name) {
  try {
    for (size_t i = 0 ; i < kFormCount ; ++i) {
      if (p_form_type[i] == type) {
        cout << "Intern recieved " << type
          << " and created " << name << endl;
        switch (i) {
          case 0:
            return new PresidentialPardonForm(name);
            break;
          case 1:
            return new RobotomyRequestForm(name);
            break;
          case 2:
            return new ShrubberyCreationForm(name);
            break;
        }
      }
    }
    throw TypeNotFoundExcenption();
  } catch (exception& e) {
    cerr << "Intern cannot create <" <<type << " : " << name
      << "> because <" << e.what() << ">" << endl;
    return NULL;
  }
}
