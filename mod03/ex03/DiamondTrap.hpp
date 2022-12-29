// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD03_EX03_DIAMONDTRAP_HPP_
#define MOD03_EX03_DIAMONDTRAP_HPP_

#include <string>

#include "ex03/ClapTrap.hpp"
#include "ex03/ScavTrap.hpp"
#include "ex03/FragTrap.hpp"

#define D_NAME "DI4MON-TP"

class DiamondTrap : public ScavTrap, public FragTrap {
 public:
  DiamondTrap();
  DiamondTrap(const std::string&);
  DiamondTrap(const DiamondTrap&);

  DiamondTrap& operator=(const DiamondTrap&);

  ~DiamondTrap();

  void whoAmI() const;
 private:
  std::string name_;
};

#endif  // MOD03_EX03_DIAMONDTRAP_HPP_
