// Copyright 2022 Yangson Choi. All rights reserved.

#include <string>

#include "ex01/Zombie.hpp"

using std::string;

Zombie* zombieHorde(int n, string name) {
  Zombie* pHorde = new Zombie[n];

  for (int i = 0 ; i < n ; ++i)
    pHorde[i].set_name(name);
  return pHorde;
}
