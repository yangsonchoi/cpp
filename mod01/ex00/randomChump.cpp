// Copyright 2022 Yangson Choi. All rights reserved.

#include <string>

#include "ex00/Zombie.hpp"

using std::string;

void randomChump(string name) {
  Zombie z(name);
  z.announce();
}
