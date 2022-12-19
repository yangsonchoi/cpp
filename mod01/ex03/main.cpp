// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex03/Weapon.hpp"
#include "ex03/HumanA.hpp"
#include "ex03/HumanB.hpp"

int main() {
{
  Weapon club = Weapon("crude spiked club");

  HumanA bob("Bob", club);
  bob.attack();
  club.setType("some other type of club");
  bob.attack();
}
{
  Weapon club = Weapon("crude spiked club");

  HumanB jim("Jim");
  jim.attack();
  jim.set_weapon(club);
  jim.attack();
  club.setType("some other type of club");
  jim.attack();
}
return 0;
}
