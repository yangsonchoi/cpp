// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD01_EX06_HARL_HPP_
#define MOD01_EX06_HARL_HPP_

#include <string>

class Harl {
 public:
  void complain(std::string level);


 private:
  typedef void (Harl::*fpHarlLevel)() const;

  void debug() const;
  void info() const;
  void warning() const;
  void error() const;
  void fatal() const;

  static const size_t kLevelCount = 4;
  static const fpHarlLevel fp_level_[kLevelCount];
  static const char* const p_level_str_[kLevelCount];
};

#endif  //  MOD01_EX06_HARL_HPP_
