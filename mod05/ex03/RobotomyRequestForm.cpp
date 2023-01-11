// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex03/RobotomyRequestForm.hpp"

#include <string>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

#include "ex03/AForm.hpp"

using std::string;
using std::cout;
using std::endl;

RobotomyRequestForm::RobotomyRequestForm() : Form() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& sf)
  : Form(sf) {}

RobotomyRequestForm::RobotomyRequestForm(const string& name)
  : Form(name, R_GRADE_SIGN, R_GRADE_EXE) {
    cout << "String RobotomyRequestForm Constructor" << endl;
  }

RobotomyRequestForm&
  RobotomyRequestForm::operator=(const RobotomyRequestForm& f) {
  name_ = f.get_name();
  grade_sign_ = f.get_grade_sign();
  grade_execute_ = f.get_grade_execute();
  signed_ = f.get_signed();
  return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
  cout << "RobotomyRequestForm Destructor" << endl;
}

void RobotomyRequestForm::execute(const Bureaucrat& b) const {
  if (signed_ == false)
    throw Form::FormNotSigned();
  if (b.get_grade() <= grade_execute_) {
    std::srand(std::time(0));
    int random_int = std::rand();
    if (random_int % 2 == 0) {
      cout << "drilllllll drilllll " << endl;
      cout << get_name() << " has been robotomized successfully." << endl;
    } else {
      cout << get_name() << " has failed to robotomize." << endl;
    }
  } else {
    throw Form::GradeTooLowException();
  }
}
