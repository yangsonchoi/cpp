// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD03_EX03_FRAGTRAP_HPP_
#define MOD03_EX03_FRAGTRAP_HPP_

#include <string>

#include "ex03/ClapTrap.hpp"

#define F_NAME "FR4G-TP"

class FragTrap : virtual public ClapTrap {
 public:
  FragTrap();
  FragTrap(const std::string& name);
  FragTrap(const FragTrap& s);

  FragTrap& operator=(const FragTrap& s);

  ~FragTrap();

  void highFivesGuys() const;

 private:
  static const unsigned int kFullHP = 100;
  static const unsigned int kFullEP = 100;
  static const unsigned int kDefaultAD = 30;
};

#endif  // MOD03_EX03_FRAGTRAP_HPP_
