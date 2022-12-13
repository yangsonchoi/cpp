// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD01_EX00_ZOMBIE_HPP_
#define MOD01_EX00_ZOMBIE_HPP_

#include <string>

class Zombie {
 public:
  explicit Zombie(std::string name) : name_(name) {}
  ~Zombie();

  void announce() const;

 private:
  std::string name_;
};

Zombie* newZombie(std::string);
void randomChump(std::string);

#endif  // MOD01_EX00_ZOMBIE_HPP_
