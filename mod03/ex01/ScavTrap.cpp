// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex01/ScavTrap.hpp"

#include <iostream>

#include "ex01/ClapTrap.hpp"

using std::cout;
using std::endl;
using std::string;

ScavTrap::ScavTrap()
    : ClapTrap(S_NAME) {
  cout << get_name() << ": ScavTrap(Default constructor)";
  cout << endl;
}

ScavTrap::ScavTrap(const string& name)
    : ClapTrap(name) {
  cout << get_name() << ": ScavTrap(Name constructor)" << endl;
}

ScavTrap::ScavTrap(const ScavTrap& s)
    : ClapTrap(s.get_name()) {
  name_ = s.get_name();
  current_hp_ = s.get_hp();
  current_ep_ = s.get_ep();
  attack_damage_ = s.get_damage();
  cout << get_name() << ": Scav(Copy constructor)" << endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& s) {
  cout << "Copy assignment operator called" << endl;
  name_ = s.get_name();
  current_hp_ = s.get_hp();
  current_ep_ = s.get_ep();
  attack_damage_ = s.get_damage();
  return *this;
}

ScavTrap::~ScavTrap() {
  cout << "ScavTrap die(destructor)" << endl;
}

void ScavTrap::attack(const std::string& target) {
  cout << get_name() << ": Exterminate!!!" << endl;
  cout << "System: ScavTrap " << get_name() << " attacks " << target
      << ", causing " << get_damage() << " points of damage!" << endl;
}

void ScavTrap::guardGate() const {
  cout << get_name() << ": YOU SHALL NOT PASS!!" << endl;
  cout << "System: ScavTrap " << get_name() << " is in guard gate mode" << endl;
}
