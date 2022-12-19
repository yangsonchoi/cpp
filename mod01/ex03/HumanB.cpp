// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex03/HumanB.hpp"

#include <iostream>

#include "ex03/Weapon.hpp"

using std::cout;
using std::endl;

void HumanB::attack() const {
  if (weapon_ == 0) {
    cout << "No weapon" << endl;
    return;
  }
  cout << name_ << " attacks with their " << weapon_->getType() << endl;
}
