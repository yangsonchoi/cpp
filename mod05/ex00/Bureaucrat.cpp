// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex00/Bureaucrat.hpp"

#include <exception>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::ostream;

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
  cout << "Name, Int Constructor" << endl;
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

ostream& operator<<(ostream& o, const Bureaucrat& b) {
  return o << b.get_name() << ", bureaucrat grade " << b.get_grade() << ".";
}
