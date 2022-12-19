// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex03/HumanA.hpp"

#include <iostream>

#include "ex03/Weapon.hpp"

using std::cout;
using std::endl;

void HumanA::attack() const {
  cout << name_ << " attacks with their " << weapon_.getType() << endl;
}
