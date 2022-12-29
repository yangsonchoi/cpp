// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex00/Dog.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::endl;

Dog::Dog() : Animal() {
  cout << get_type() << ": Default Constructor [ Dog ]" << endl;
}

Dog::Dog(const Dog& d) : Animal(d) {
  cout << get_type() << ": Copy Constructor [ Dog ]" << endl;
}

Dog& Dog::operator=(const Dog& d) {
  cout << "Copy Assignment operator called [ Dog ]" << endl;
  type_ = d.get_type();
}

Dog::~Dog() {
  cout << get_type() << ": Destructor [ Dog ]" << endl;
}

void Dog::makeSound() const {
  cout << get_type() << ": MUNG MUNG WALL WALL!!" << endl;
}
