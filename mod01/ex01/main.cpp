// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>

#include "ex01/Zombie.hpp"

using std::cout;
using std::endl;

int main(void) {
  cout << "Creating a Horde of " << 5 << " Zombies named Planthate"
    << endl << endl;
  Zombie *z = zombieHorde(5, "Planthate");
  cout << endl;

  for (int i = 0; i < 5; i++)
    z[0].announce();

  cout << endl << "Burying a Horde of " << 5 << " Zombies"
    << endl << endl;
  delete[] z;
  return 0;
}
