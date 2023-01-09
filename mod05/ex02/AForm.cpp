// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex02/AForm.hpp"

#include <string>
#include <iostream>

#include "ex02/Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;
using std::ostream;

const char* Form::GradeTooHighException::what(void) const throw() {
  return "grade is too high.";
}

const char* Form::GradeTooLowException::what(void) const throw() {
  return "grade is too low.";
}

const char* Form::FormNotSigned::what(void) const throw() {
  return "form is not signed.";
}

Form::Form() {}

Form::Form(const Form& f)
  : name_(f.get_name()), grade_sign_(f.get_grade_sign()),
  grade_execute_(f.get_grade_execute()), signed_(f.get_signed()) {
}

Form::Form(const std::string& name, const int& sign, const int& execute)
  : name_(name), grade_sign_(sign), grade_execute_(execute), signed_(false) {
    cout << "String, Int Form Constructor" << endl;
}

Form& Form::operator=(const Form& f) {
  name_ = f.get_name();
  grade_sign_ = f.get_grade_sign();
  grade_execute_ = f.get_grade_execute();
  signed_ = f.get_signed();
  return *this;
}

Form::~Form() {
  cout << "Form Destructor" << endl;
}

void Form::BeSigned(const Bureaucrat& b) {
  if (b.get_grade() <= grade_sign_) {
    signed_ = true;
  } else {
    throw Form::GradeTooHighException();
  }
}

ostream& operator<<(ostream& o, const Form& f) {
  return o << "Form name: " << f.get_name() << endl
    << "Grade required to sign: " << f.get_grade_sign() << endl
    << "Grade required to execute: " << f.get_grade_execute() << endl
    << "Signed:" << std::boolalpha << f.get_signed();
}
