// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD04_EX01_CAT_HPP_
#define MOD04_EX01_CAT_HPP_

#include <string>

#include "ex01/Animal.hpp"
#include "ex01/Brain.hpp"

#define C_TYPE "Cat"

class Cat : public Animal {
 public :
  Cat();
  Cat(const Cat&);

  Cat& operator=(const Cat&);

  virtual ~Cat();

  void makeSound() const;
  void PrintBrain() const;
  void InputIdea(const int, const std::string) const;

 private :
  Brain* cat_brain_;
};

#endif  // MOD04_EX01_CAT_HPP_