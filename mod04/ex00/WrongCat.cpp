// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex00/WrongCat.hpp"

#include <iostream>
#include <string>

#include "ex00/WrongAnimal.hpp"

using std::cout;
using std::endl;

WrongCat::WrongCat() : WrongAnimal() {
  type_ = WC_TYPE;
  cout << get_type() << ": Default Constructor [ WrongCat ]" << endl;
}

WrongCat::WrongCat(const WrongCat& c) : WrongAnimal(c) {
  cout << get_type() << ": Copy Constructor [ WrongCat ]" << endl;
}

WrongCat& WrongCat::operator=(const WrongCat& c) {
  cout << "Copy Assignment operator called [ WrongCat ]" << endl;
  type_ = c.get_type();
  return *this;
}

WrongCat::~WrongCat() {
  cout << get_type() << ": Destructor [ WrongCat ]" << endl;
}

void WrongCat::makeSound() const {
  cout << get_type() << ": NYAONG NYAONG!!" << endl;
}
