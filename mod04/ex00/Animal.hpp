// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD04_EX00_ANIMAL_HPP_
#define MOD04_EX00_ANIMAL_HPP_

#include <string>

class Animal {
 public :
  Animal();
  Animal(const Animal&);

  Animal& operator=(const Animal&);

  ~Animal();

  std::string get_type() const { return type_; }
  void set_type(const std::string type) { type_ = type; } 
  virtual void makeSound() const;

 protected :
  std::string type_;
};

#endif  // MOD04_EX00_ANIMAL_HPP_