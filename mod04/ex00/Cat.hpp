// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD04_EX00_CAT_HPP_
#define MOD04_EX00_CAT_HPP_

#include <string>

#include "ex00/Animal.hpp"

#define C_TYPE "Cat"

class Cat : public Animal {
 public :
  Cat();
  Cat(const Cat&);

  Cat& operator=(const Cat&);

  virtual ~Cat();

  void makeSound() const;
};

#endif  // MOD04_EX00_CAT_HPP_