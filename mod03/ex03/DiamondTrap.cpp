// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex03/DiamondTrap.hpp"

#include <iostream>
#include <string>

#include "ex03/ClapTrap.hpp"
#include "ex03/ScavTrap.hpp"
#include "ex03/FragTrap.hpp"

using std::cout;
using std::endl;
using std::string;

DiamondTrap::DiamondTrap()
    : ClapTrap(D_NAME) {
  name_ = get_name();
  current_hp_ = FragTrap::get_hp();
  current_ep_ = 50;
  // current_ep_ = ScavTrap::get_ep();
  attack_damage_ = FragTrap::get_damage();
  cout << get_name() << ": DiamondTrap(Default constructor)" << endl;
}

DiamondTrap::DiamondTrap(const string& name)
    : ClapTrap(name) {
  name_ = name;
  current_hp_ = FragTrap::get_hp();
  current_ep_ = 50;
  attack_damage_ = FragTrap::get_damage();
  cout << get_name() << ": DiamondTrap(Name constructor)" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& d)
    : ClapTrap(d.get_name()) {
  name_ = d.get_name();
  current_hp_ = d.get_hp();
  current_ep_ = d.get_ep();
  attack_damage_ = d.get_damage();
  cout << get_name() << ": DiamondTrap(Copy constructor)" << endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& d) {
  cout << "Copy assignment operator called" << endl;
  name_ = d.get_name();
  current_hp_ = d.get_hp();
  current_ep_ = d.get_ep();
  attack_damage_ = d.get_damage();
  return *this;
}

DiamondTrap::~DiamondTrap() {
  cout << "DiamondTrap die(destructor)" << endl;
}

void DiamondTrap::whoAmI() const {
  cout << get_name() << ": Who Am I??" << endl;
  cout << "HP: " << get_hp() << endl;
  cout << "EP: " << get_ep() << endl;
  cout << "AD: " << get_damage() << endl;
}
