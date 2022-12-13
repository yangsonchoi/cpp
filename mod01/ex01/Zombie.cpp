// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex01/Zombie.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

Zombie::Zombie(void) {
  std::cout << "For the Horde!" << std::endl;
}

Zombie::~Zombie() {
  cout << name_ << ": UghhhH..." << endl;
}

void Zombie::announce() const {
  cout << name_ << ": BraiiiiiiinnnzzzZ..." << endl;
}
