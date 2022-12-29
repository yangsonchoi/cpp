// Copyright 2022 Yangson Choi. All rights reserved.

#include <string>
#include <iostream>

#include "ex02/ClapTrap.hpp"
#include "ex02/ScavTrap.hpp"
#include "ex02/FragTrap.hpp"

using std::cout;
using std::endl;
using std::string;

int main(void) {
  string str_1 = "Stabby";
  string str_2 = "Gandalf";
  string str_3 = "Fr4g Prince";

  ClapTrap  c1(str_1);
  ScavTrap  s1(str_2);
  FragTrap  f1(str_3);

  cout << endl;
  f1.highFivesGuys();
  cout << endl;

  cout << endl;
  s1.guardGate();
  cout << endl;

  cout << endl;
  f1.attack(str_2);
  s1.takeDamage(f1.get_damage());
  f1.attack(str_1);
  c1.takeDamage(f1.get_damage());
  cout << endl;

  cout << endl;
  f1.beRepaired(20);
  cout << endl;

  return 0;
}
