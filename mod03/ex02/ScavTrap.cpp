// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex02/ScavTrap.hpp"

#include <iostream>
#include <string>

#include "ex02/ClapTrap.hpp"

using std::cout;
using std::endl;
using std::string;

ScavTrap::ScavTrap()
    : ClapTrap(S_NAME) {
  current_hp_ = kFullHP;
  current_ep_ = kFullEP;
  attack_damage_ = kDefaultAD;
  cout << RED << get_name() << ": ScavTrap(Default constructor)"
    << RESET_COLOR << endl;
}

ScavTrap::ScavTrap(const string& name)
    : ClapTrap(name) {
  current_hp_ = kFullHP;
  current_ep_ = kFullEP;
  attack_damage_ = kDefaultAD;
  cout << RED << get_name() << ": ScavTrap(Name constructor)"
    << RESET_COLOR << endl;
}

ScavTrap::ScavTrap(const ScavTrap& s)
    : ClapTrap(s.get_name()) {
  name_ = s.get_name();
  current_hp_ = s.get_hp();
  current_ep_ = s.get_ep();
  attack_damage_ = s.get_damage();
  cout << RED << get_name() << ": ScavTrap(Copy constructor)"
    << RESET_COLOR << endl;
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
  cout << RED << "ScavTrap die(destructor)" << RESET_COLOR << endl;
}

void ScavTrap::attack(const std::string& target) {
  cout << RED << get_name() << ": Exterminate!!!" << RESET_COLOR << endl;
  cout << "System: ScavTrap " << get_name() << " attacks " << target
      << ", causing " << get_damage() << " points of damage!" << endl;
}

void ScavTrap::guardGate() const {
  cout << RED << get_name() << ": YOU SHALL NOT PASS!!" << RESET_COLOR << endl;
  cout << "System: ScavTrap " << get_name() << " is in guard gate mode" << endl;
}
