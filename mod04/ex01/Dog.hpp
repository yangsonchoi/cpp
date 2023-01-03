// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD04_EX01_DOG_HPP_
#define MOD04_EX01_DOG_HPP_

#include <string>

#include "ex01/Animal.hpp"
#include "ex01/Brain.hpp"

#define D_TYPE "Dog"

class Dog : public Animal {
 public :
  Dog();
  Dog(const Dog&);

  Dog& operator=(const Dog&);

  virtual ~Dog();

  void makeSound() const;
  void PrintBrain() const;

 private :
  Brain* dog_brain_;
};

#endif  // MOD04_EX01_DOG_HPP_