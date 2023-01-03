// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex00/Animal.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::endl;

Animal::Animal() : type_(A_TYPE) {
  cout << get_type() << ": Default Constructor [ Animal ]" << endl;
}

Animal::Animal(const Animal& a) : type_(a.get_type()) {
  cout << get_type() << ": Copy Constructor [ Animal ]" << endl;
}

Animal& Animal::operator=(const Animal& a) {
  cout << "Copy Assignment operator called [ Animal ]" << endl;
  type_ = a.get_type();
  return *this;
}

Animal::~Animal() {
  cout << get_type() << ": Destructor [ Animal ]" << endl;
}

void Animal::makeSound() const {
  cout << get_type() << ": ANI ANI ANIMAAAAALLL~" << endl;
}
