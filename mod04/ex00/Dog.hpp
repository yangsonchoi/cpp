// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD04_EX00_DOG_HPP_
#define MOD04_EX00_DOG_HPP_

#include <string>

#include "ex00/Animal.hpp"

class Dog : public Animal {
 public :
  Dog();
  Dog(const Dog&);

  Dog& operator=(const Dog&);

  ~Dog();

  void makeSound() const;
};

#endif  // MOD04_EX00_DOG_HPP_