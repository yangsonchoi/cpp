// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>

#include "ex00/Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::cerr;
using std::string;
using std::exception;

void FunctionCall(Bureaucrat* b, void (Bureaucrat::*f)()) {
  try {
    (b->*f)();
    cout << *b << endl;
  } catch (exception& e) {
    cerr << e.what() << endl;
  }
}

void MakeTry(const string& name, const int& grade) {
  try {
    Bureaucrat b(name, grade);
    cout << b << endl;
  } catch (exception& e) {
    cerr << e.what() << endl;
  }
}

int main() {
  Bureaucrat Andrew("Andrew", 1);
  Bureaucrat Ean("Ean", 150);

  cout << Andrew << endl;
  cout << Ean << endl;
  cout << endl;

  FunctionCall(&Andrew, &Bureaucrat::IncrementGrade);
  FunctionCall(&Ean, &Bureaucrat::DecrementGrade);
  cout << endl;

  MakeTry("Andrew", 0);
  MakeTry("Ean", 151);
  cout << endl;

  MakeTry("Andrew", 70);
  MakeTry("Ean", 70);
  cout << endl;

  FunctionCall(&Andrew, &Bureaucrat::DecrementGrade);
  FunctionCall(&Ean, &Bureaucrat::IncrementGrade);
  cout << endl;

  FunctionCall(&Andrew, &Bureaucrat::DecrementGrade);
  FunctionCall(&Ean, &Bureaucrat::IncrementGrade);
  return 0;
}
