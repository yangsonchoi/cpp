// Copyright 2022 Yangson Choi. All rights reserved.

#include <string>
#include <iostream>

#include "ex01/ClapTrap.hpp"
#include "ex01/ScavTrap.hpp"

using std::cout;
using std::endl;
using std::string;

int main(void) {
  string str_1 = "Stabby";
  string str_2 = "Gandalf";

  ClapTrap  c1(str_1);
  ScavTrap  s1(str_2);
  ScavTrap  s2;

  string str_3 = s2.get_name();

  cout << endl;
  c1.attack(str_2);
  s1.takeDamage(5);
  cout << endl;

  cout << endl;
  s2.beRepaired(3);
  c1.beRepaired(4);
  cout << endl;

  cout << endl;
  s2.attack(str_1);
  c1.takeDamage(10);
  cout << endl;

  cout << endl;
  c1.beRepaired(10);
  c1.attack(str_2);
  cout << endl;

  cout << endl;
  s1.attack(str_3);
  s2.takeDamage(20);
  cout << endl;

  cout << endl;
  s1.guardGate();
  s2.guardGate();
  cout << endl;

  return 0;
}
