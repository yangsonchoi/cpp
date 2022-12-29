// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD03_EX02_FRAGTRAP_HPP_
#define MOD03_EX02_FRAGTRAP_HPP_

#include <string>

#include "ClapTrap.hpp"

#define F_NAME "FR4G-TP"

class FragTrap : public ClapTrap {
 public:
  FragTrap(void);
  FragTrap(const std::string& name);
  FragTrap(const FragTrap& s);

  FragTrap& operator=(const FragTrap& s);

  ~FragTrap(void);

  void highFivesGuys(void) const;

 private:
  static const unsigned int kFullHP = 100;
  static const unsigned int kFullEP = 100;
  static const unsigned int kDefaultAD = 30;
};

#endif  // MOD03_EX02_FRAGTRAP_HPP_
