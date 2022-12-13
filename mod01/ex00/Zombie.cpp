// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex00/Zombie.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

Zombie::~Zombie() {
  cout << name_ << ": UghhhH..." << endl;
}

void Zombie::announce() const {
  cout << name_ << ": BraiiiiiiinnnzzzZ..." << endl;
}
