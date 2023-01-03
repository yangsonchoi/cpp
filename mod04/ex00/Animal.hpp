// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD04_EX00_ANIMAL_HPP_
#define MOD04_EX00_ANIMAL_HPP_

#include <string>

#define A_TYPE "Animal"

class Animal {
 public :
  Animal();
  Animal(const Animal&);

  Animal& operator=(const Animal&);

  virtual ~Animal();

  std::string get_type() const { return type_; }
  void set_type(const std::string type) { type_ = type; } 
  virtual void makeSound() const;

 protected :
  std::string type_;
};

#endif  // MOD04_EX00_ANIMAL_HPP_