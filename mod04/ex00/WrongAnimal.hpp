// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD04_EX00_WRONGANIMAL_HPP_
#define MOD04_EX00_WRONGANIMAL_HPP_

#include <string>

#define WA_TYPE "WrongAnimal"

class WrongAnimal {
 public :
  WrongAnimal();
  WrongAnimal(const WrongAnimal&);

  WrongAnimal& operator=(const WrongAnimal&);

  ~WrongAnimal();

  std::string get_type() const { return type_; }
  void set_type(const std::string type) { type_ = type; } 
  void makeSound() const;

 protected :
  std::string type_;
};

#endif  // MOD04_EX00_WRONGANIMAL_HPP_