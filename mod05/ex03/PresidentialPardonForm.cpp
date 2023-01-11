// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex03/PresidentialPardonForm.hpp"

#include <string>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

#include "ex03/AForm.hpp"

using std::string;
using std::cout;
using std::endl;

PresidentialPardonForm::PresidentialPardonForm() : Form() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& sf)
  : Form(sf) {}

PresidentialPardonForm::PresidentialPardonForm(const string& name)
  : Form(name, P_GRADE_SIGN, P_GRADE_EXE) {
    cout << "String PresidentialPardonForm Constructor" << endl;
  }

PresidentialPardonForm&
  PresidentialPardonForm::operator=(const PresidentialPardonForm& f) {
  name_ = f.get_name();
  grade_sign_ = f.get_grade_sign();
  grade_execute_ = f.get_grade_execute();
  signed_ = f.get_signed();
  return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
  cout << "PresidentialPardonForm Destructor" << endl;
}

void PresidentialPardonForm::execute(const Bureaucrat& b) const {
  if (signed_ == false)
    throw Form::FormNotSigned();
  if (b.get_grade() <= grade_execute_) {
    cout <<  get_name() << " has been pardoned by Zaphod Beeblebrox." << endl;
  } else {
    throw Form::GradeTooLowException();
  }
}
