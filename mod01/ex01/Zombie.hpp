// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD01_EX01_ZOMBIE_HPP_
#define MOD01_EX01_ZOMBIE_HPP_

#include <string>

class Zombie {
 public:
  Zombie(void);
  explicit Zombie(std::string name) : name_(name) {}
  ~Zombie();

  void announce() const;
  void setName(std::string name) { name_ = name; };

 private:
  std::string name_;
};

Zombie* zombieHorde(int n, std::string name);

#endif  // MOD01_EX01_ZOMBIE_HPP_
