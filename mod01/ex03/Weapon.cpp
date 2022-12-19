// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex03/Weapon.hpp"

#include <string>

using std::string;

const string& Weapon::getType() const {
  return type_;
}

void Weapon::setType(string type) {
  type_ = type;
}
