// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex01/Brain.hpp"

#include <iostream>

using std::cout;
using std::endl;

Brain::Brain() {
  cout << "Default Constructor [ Brain ]" << endl;
}

Brain::Brain(const Brain& b) {
  cout << "Copy Constructor [ Brain ]" << endl;
  for (int i = 0; i < I_SIZE; ++i)
    ideas_[i] = b.get_idea(i);
}

Brain& Brain::operator=(const Brain& b) {
  cout << "Copy Assignment operator called [ Brain ]" << endl;
  for (int i = 0; i < I_SIZE; ++i)
    ideas_[i] = b.get_idea(i);
  return *this;
}

Brain::~Brain() {
  cout << "Destructor [ Brain ]" << endl;
}
