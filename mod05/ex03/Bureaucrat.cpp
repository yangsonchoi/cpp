// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex03/Bureaucrat.hpp"

#include <exception>
#include <string>
#include <iostream>

#include "ex03/AForm.hpp"

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
    cout << get_name()<< " signs " << f.get_name() << endl;
  } catch (exception& e) {
    cerr << get_name() << " cannot sign "
      << f.get_name() << " because " << e.what() << endl;
  }
}

void Bureaucrat::ExecuteForm(Form& f) const {
  try {
    f.execute(*this);
    cout << get_name() << " executed " << f.get_name() << endl;
  } catch (exception& e) {
    cerr << get_name() << " cannot execute "
      << f.get_name() << " because " << e.what() << endl;
  }
}

ostream& operator<<(ostream& o, const Bureaucrat& b) {
  return o << b.get_name() << ", bureaucrat grade " << b.get_grade() << ".";
}
