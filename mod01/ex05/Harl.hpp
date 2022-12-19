// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD01_EX05_HARL_HPP_
#define MOD01_EX05_HARL_HPP_

class Harl {
 public:
  void complain(std::string level);

 private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);

  typedef *fpHarl (Harl::*fp)(void);

  static const size_t kLevelCount = 4;
  static void (Harl::*fpComplain[kLevelCount])(void);
  const std::string levels_[kLevelCount];
};

#endif  //  MOD01_EX05_HARL_HPP_