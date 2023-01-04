// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD04_EX02_DOG_HPP_
#define MOD04_EX02_DOG_HPP_

#include <string>

#include "ex02/Animal.hpp"
#include "ex02/Brain.hpp"

#define D_TYPE "Dog"

class Dog : public Animal {
 public :
  Dog();
  Dog(const Dog&);

  Dog& operator=(const Dog&);

  virtual ~Dog();

  void makeSound() const;
  void PrintBrain() const;
  void InputIdea(const int, const std::string) const;

 private :
  Brain* dog_brain_;
};

#endif  // MOD04_EX02_DOG_HPP_