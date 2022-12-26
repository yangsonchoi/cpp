// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex01/ClapTrap.hpp"

#include <iostream>

using std::cout;
using std::endl;
using std::string;

ClapTrap::ClapTrap()
    : name_(C_NAME), current_hp_(kFullHP),
    current_ep_(kFullEP), attack_damage_(kDefaultAD) {
  cout << get_name() << ": Recompiling my combat code(Default constructor)";
  cout << endl;
}

ClapTrap::ClapTrap(const string& name)
    : name_(name), current_hp_(kFullHP),
    current_ep_(kFullEP), attack_damage_(kDefaultAD) {
  cout << get_name() << ": go -- Oh that's me(Name constructor)" << endl;
}

ClapTrap::ClapTrap(const ClapTrap& c)
    : name_(c.get_name()), current_hp_(c.get_hp()), current_ep_(c.get_ep()),
      attack_damage_(c.get_damage()) {
  cout << get_name() << ": Viva la Robolution!(Copy constructor)" << endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c) {
  cout << "Copy assignment operator called" << endl;
  name_ = c.get_name();
  current_hp_ = c.get_hp();
  current_ep_ = c.get_ep();
  attack_damage_ = c.get_damage();
  return *this;
}

ClapTrap::~ClapTrap() {
  cout << "I see three flashing red lights...(destructor)" << endl;
}

void ClapTrap::attack(const std::string& target) {
  cout << get_name() << ": Are you bulletproof or...? Whoops! Guess not!";
  cout << endl;
  cout << "System: ClapTrap " << get_name() << " attacks " << target
      << ", causing " << get_damage() << " points of damage!" << endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  cout << get_name() << ": I'm leaking!" << endl;
  if (get_hp() < amount)
    set_hp(0);
  else
    set_hp(get_hp() - amount);
  cout << "System: ClapTrap " << get_name() << " take " << amount
      << " damage. ";
  cout << "[ " << get_hp() << " ]" << endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  cout << get_name() << ": Sweet life juice!" << endl;
  cout << "System: ClapTrap " << get_name() << " heal " << amount
      << " hit points. ";
    set_hp(get_hp() + amount);
  cout << "[ " << get_hp() << " ]" << endl;
}
