// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex01/Dog.hpp"

#include <iostream>
#include <sstream>
#include <string>

#include "ex01/Animal.hpp"
#include "ex01/Brain.hpp"

using std::cout;
using std::endl;
using std::stringstream;

Dog::Dog() : Animal() {
  type_ = D_TYPE;
  dog_brain_ = new Brain();
  cout << get_type() << ": Default Constructor [ Dog ]" << endl;
}

Dog::Dog(const Dog& d) : Animal(d) {
  dog_brain_ = new Brain(*d.dog_brain_);
  cout << get_type() << ": Copy Constructor [ Dog ]" << endl;
}

Dog& Dog::operator=(const Dog& d) {
  cout << "Copy Assignment operator called [ Dog ]" << endl;
  type_ = d.get_type();
  *dog_brain_ = *d.dog_brain_;
  return *this;
}

Dog::~Dog() {
  cout << get_type() << ": Destructor [ Dog ]" << endl;
  delete dog_brain_;
}

void Dog::makeSound() const {
  cout << get_type() << ": MUNG MUNG WALL WALL!!" << endl;
}

void Dog::PrintBrain() const {
  cout << get_type() << "'s ideas" << endl;
  for (int i = 0; i < I_SIZE; ++i)
    cout << dog_brain_->get_idea(i) << endl;
}

void Dog::InputIdea(const int i, const std::string idea) const {
  dog_brain_->set_idea(i, idea);
}
