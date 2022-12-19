// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD01_EX03_HUMANB_HPP_
#define MOD01_EX03_HUMANB_HPP_

#include <string>

#include "ex03/Weapon.hpp"

class HumanB {
 public:
  explicit HumanB(std::string name) : name_(name), weapon_(0) {}
  void set_weapon(const Weapon& weapon) { weapon_ = &weapon; }
  void attack() const;

 private:
  std::string name_;
  const Weapon* weapon_;
};

#endif  // MOD01_EX03_HUMANB_HPP_
