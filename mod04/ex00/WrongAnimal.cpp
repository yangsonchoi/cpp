// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex00/WrongAnimal.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::endl;

WrongAnimal::WrongAnimal() : type_(WA_TYPE) {
  cout << get_type() << ": Default Constructor [ WrongAnimal ]" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& a) : type_(a.get_type()) {
  cout << get_type() << ": Copy Constructor [ WrongAnimal ]" << endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& a) {
  cout << "Copy Assignment operator called [ WrongAnimal ]" << endl;
  type_ = a.get_type();
  return *this;
}

WrongAnimal::~WrongAnimal() {
  cout << get_type() << ": Destructor [ WrongAnimal ]" << endl;
}

void WrongAnimal::makeSound() const {
  cout << get_type() << ": ANI ANI ANIMAAAAALLL~" << endl;
}
