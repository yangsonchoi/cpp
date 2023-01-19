// Copyright 2022 Yangson Choi. All rights reserved.

#include <string>
#include <iostream>

#include "ex03/ClapTrap.hpp"
#include "ex03/ScavTrap.hpp"
#include "ex03/FragTrap.hpp"
#include "ex03/DiamondTrap.hpp"

using std::cout;
using std::endl;
using std::string;

int main(void) {
  string str_1 = "Diamonlaza";

  DiamondTrap d1(str_1);
  DiamondTrap d2;

  cout << endl;
  d1.whoAmI();
  cout << endl;
  d2.whoAmI();

  cout << endl;
  d1.highFivesGuys();

  cout << endl;
  d1.guardGate();

  cout << endl;
  d1.attack(d2.get_name());
  d1.ClapTrap::attack(d2.get_name());
  d2.takeDamage(d1.get_damage());

  cout << endl;
  d1.beRepaired(20);

  return 0;
}
