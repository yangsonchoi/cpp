// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex01/Cat.hpp"

#include <iostream>
#include <string>

#include "ex01/Animal.hpp"
#include "ex01/Brain.hpp"

using std::cout;
using std::endl;

Cat::Cat() : Animal() {
  type_ = C_TYPE;
  cat_brain_ = new Brain();
  cout << get_type() << ": Default Constructor [ Cat ]" << endl;
}

Cat::Cat(const Cat& c) : Animal(c) {
  cat_brain_ = new Brain(*c.cat_brain_);
  cout << get_type() << ": Copy Constructor [ Cat ]" << endl;
}

Cat& Cat::operator=(const Cat& c) {
  cout << "Copy Assignment operator called [ Cat ]" << endl;
  type_ = c.get_type();
  *cat_brain_ = *c.cat_brain_;
  return *this;
}

Cat::~Cat() {
  cout << get_type() << ": Destructor [ Cat ]" << endl;
  delete cat_brain_;
}

void Cat::makeSound() const {
  cout << get_type() << ": NYAONG NYAONG!!" << endl;
}

void Cat::PrintBrain() const {
  for (int i = 0; i < I_SIZE; ++i)
    cout << cat_brain_->get_idea(i) << endl;
}
