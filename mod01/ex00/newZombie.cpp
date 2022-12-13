// Copyright 2022 Yangson Choi. All rights reserved.

#include <string>

#include "ex00/Zombie.hpp"

using std::string;

Zombie* newZombie(string name) {
  Zombie* z = new Zombie(name);
  return z;
}
