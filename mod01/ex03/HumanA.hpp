// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD01_EX03_HUMANA_HPP_
#define MOD01_EX03_HUMANA_HPP_

#include <string>

#include "ex03/Weapon.hpp"

class HumanA {
 public:
  HumanA(std::string name, Weapon& weapon) : name_(name), weapon_(weapon) {}
  void attack() const;

 private:
  std::string name_;
  const Weapon& weapon_;
};

#endif  // MOD01_EX03_HUMANA_HPP_
