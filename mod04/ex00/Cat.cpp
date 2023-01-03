// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex00/Cat.hpp"

#include <iostream>
#include <string>

#include "ex00/Animal.hpp"

using std::cout;
using std::endl;

Cat::Cat() : Animal() {
  type_ = C_TYPE;
  cout << get_type() << ": Default Constructor [ Cat ]" << endl;
}

Cat::Cat(const Cat& c) : Animal(c) {
  cout << get_type() << ": Copy Constructor [ Cat ]" << endl;
}

Cat& Cat::operator=(const Cat& c) {
  cout << "Copy Assignment operator called [ Cat ]" << endl;
  type_ = c.get_type();
  return *this;
}

Cat::~Cat() {
  cout << get_type() << ": Destructor [ Cat ]" << endl;
}

void Cat::makeSound() const {
  cout << get_type() << ": NYAONG NYAONG!!" << endl;
}
