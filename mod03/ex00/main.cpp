// Copyright 2022 Yangson Choi. All rights reserved.

#include <string>
#include <iostream>

#include "ex00/ClapTrap.hpp"

using std::cout;
using std::endl;
using std::string;

int main(void) {
  string s1 = "Stabby";

  ClapTrap  c1(s1);
  ClapTrap  c2;

  string s2 = c2.get_name();

  cout << endl;
  c1.attack(s2);
  c2.takeDamage(5);
  cout << endl;

  cout << endl;
  c2.beRepaired(3);
  c2.beRepaired(4);
  cout << endl;

  cout << endl;
  c2.attack(s1);
  c1.takeDamage(10);
  cout << endl;

  cout << endl;
  c1.beRepaired(10);
  c1.attack(c2.get_name());
  cout << endl;

  cout << endl;
  c2.attack(s1);
  c1.takeDamage(5);
  cout << endl;

  return 0;
}
