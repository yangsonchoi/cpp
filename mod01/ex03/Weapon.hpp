// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD01_EX03_WEAPON_HPP_
#define MOD01_EX03_WEAPON_HPP_

#include <string>

class Weapon {
 public:
  explicit Weapon(std::string type) : type_(type) {}
  const std::string& getType() const;
  void setType(std::string type);

 private:
  std::string type_;
};

#endif  // MOD01_EX03_WEAPON_HPP_
