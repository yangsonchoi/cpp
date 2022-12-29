// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex03/FragTrap.hpp"

#include <iostream>
#include <string>

#include "ex03/ClapTrap.hpp"

using std::cout;
using std::endl;
using std::string;

FragTrap::FragTrap()
    : ClapTrap(F_NAME) {
  current_hp_ = kFullHP;
  current_ep_ = kFullEP;
  attack_damage_ = kDefaultAD;
  cout << YELLOW << get_name() << ": FragTrap(Default constructor)"
    << RESET_COLOR << endl;
}

FragTrap::FragTrap(const string& name)
    : ClapTrap(name) {
  current_hp_ = kFullHP;
  current_ep_ = kFullEP;
  attack_damage_ = kDefaultAD;
  cout << YELLOW << get_name() << ": FragTrap(Name constructor)"
    << RESET_COLOR << endl;
}

FragTrap::FragTrap(const FragTrap& s)
    : ClapTrap(s.get_name()) {
  name_ = s.get_name();
  current_hp_ = s.get_hp();
  current_ep_ = s.get_ep();
  attack_damage_ = s.get_damage();
  cout << YELLOW << get_name() << ": FragTrap(Copy constructor)"
    << RESET_COLOR << endl;
}

FragTrap& FragTrap::operator=(const FragTrap& s) {
  cout << "Copy assignment operator called" << endl;
  name_ = s.get_name();
  current_hp_ = s.get_hp();
  current_ep_ = s.get_ep();
  attack_damage_ = s.get_damage();
  return *this;
}

FragTrap::~FragTrap() {
  cout << YELLOW << "FragTrap die(destructor)" << RESET_COLOR << endl;
}

void FragTrap::highFivesGuys() const {
  cout << YELLOW << get_name() << ": Can I get a FIVE??" << RESET_COLOR << endl;
  cout << "System: FragTrap " << get_name()
    << " is begging for a highfive." << endl;
}
