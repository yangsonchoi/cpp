// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD03_EX02_SCAVTRAP_HPP_
#define MOD03_EX02_SCAVTRAP_HPP_

#include <string>

#include "ClapTrap.hpp"

#define S_NAME "SC4V-TP"

class ScavTrap : public ClapTrap {
 public:
  ScavTrap(void);
  ScavTrap(const std::string& name);
  ScavTrap(const ScavTrap& s);

  ScavTrap& operator=(const ScavTrap& s);

  ~ScavTrap(void);

  void attack(const std::string& target);
  void guardGate(void) const;

 private:
  static const unsigned int kFullHP = 100;
  static const unsigned int kFullEP = 50;
  static const unsigned int kDefaultAD = 20;
};

#endif  // MOD03_EX02_SCAVTRAP_HPP_
