// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex02/Brain.hpp"

#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::stringstream;

Brain::Brain() {
  cout << "Default Constructor [ Brain ]" << endl;
  InitialBrain();
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

void Brain::InitialBrain() {
  for (int i = 0; i < I_SIZE; ++i) {
    stringstream buf;
    buf << "[ Idea " << i << " ]";
    set_idea(i, buf.str());
  }
}
