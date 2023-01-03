// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD04_EX00_WRONGCAT_HPP_
#define MOD04_EX00_WRONGCAT_HPP_

#include <string>

#include "ex00/WrongAnimal.hpp"

#define WC_TYPE "WrongCat"

class WrongCat : public WrongAnimal {
 public :
  WrongCat();
  WrongCat(const WrongCat&);

  WrongCat& operator=(const WrongCat&);

  ~WrongCat();

  void makeSound() const;
};

#endif  // MOD04_EX00_WRONGCAT_HPP_