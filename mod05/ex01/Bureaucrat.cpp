// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex01/Bureaucrat.hpp"

#include <exception>
#include <string>
#include <iostream>

#include "ex01/Form.hpp"

using std::cout;
using std::endl;
using std::cerr;
using std::string;
using std::ostream;
using std::exception;

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
  return "Bureaucrat Grade Too High";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
  return "Bureaucrat Grade Too Low";
}

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& b)
  : name_(b.get_name()), grade_(b.get_grade()) {
  if (grade_ < GRADE_MAX)
    throw GradeTooHighException();
  if (grade_ > GRADE_MIN)
    throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const string& name, const int& grade)
  : name_(name), grade_(grade) {
  if (grade_ < GRADE_MAX)
    throw GradeTooHighException();
  if (grade_ > GRADE_MIN)
    throw GradeTooLowException();
  cout << "Name, Int Beureaucrat Constructor" << endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b) {
  name_ = b.get_name();
  grade_ = b.get_grade();
  return *this;
}

Bureaucrat::~Bureaucrat(void) {
  cout << "Destructor" << endl;
}

void Bureaucrat::IncrementGrade() {
  if (grade_ - 1 < GRADE_MAX)
    throw GradeTooHighException();
  --grade_;
}

void Bureaucrat::DecrementGrade() {
  if (grade_ + 1 > GRADE_MIN)
    throw GradeTooLowException();
  ++grade_;
}

void Bureaucrat::SignForm(Form& f) const {
  try {
    f.BeSigned(*this);
    cout << name_ << " signs " << f.get_name() << endl;
  } catch (exception& e) {
    cerr << name_ << " cannot sign "
      << f.get_name() << " because " << e.what() << endl;
  }
}

ostream& operator<<(ostream& o, const Bureaucrat& b) {
  return o << b.get_name() << ", bureaucrat grade " << b.get_grade() << ".";
}
