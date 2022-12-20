// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex06/Harl.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

const Harl::fpHarlLevel Harl::fp_level_[kLevelCount] = { &Harl::debug,
                                                        &Harl::info,
                                                        &Harl::warning,
                                                        &Harl::error,
};

const char* const Harl::p_level_str_[kLevelCount] = { "DEBUG",
                                           "INFO",
                                           "WARNING",
                                           "ERROR",
};

void Harl::debug() const {
  cout << "[ DEBUG ]" << endl
    << "I love to get extra bacon for my "
    << "7XL-double-cheese-triple-pickle-special-ketchup burger." << endl
    << "I just love it!"
    << endl << endl;
}

void Harl::info() const {
  cout << "[ INFO ]" << endl
    << "I cannot believe adding extra bacon cost more money." << endl
    << "You don’t put enough!" << endl
    << "If you did I would not have to ask for it!"
    << endl << endl;
}

void Harl::warning() const {
  cout <<  "[ WARNING ]" << endl
    << "I think I deserve to have some extra bacon for free." << endl
    << "I’ve been coming here for years and "
    << "you just started working here last month."
    << endl << endl;
}

void Harl::error() const {
  cout <<  "[ ERROR ]" << endl
    << "This is unacceptable, I want to speak to the manager now."
    << endl << endl;
}

void Harl::fatal() const {
  cout <<  "[ Probably complaining about insignificant problems ]"
    << endl << endl;
}

void Harl::complain(string level) {
  size_t i;
  for (i = 0; i < kLevelCount; ++i) {
    if (level == p_level_str_[i])
      break;
  }
  switch (i) {
    case 0:
      (this->*fp_level_[0])();
    case 1:
      (this->*fp_level_[1])();
    case 2:
      (this->*fp_level_[2])();
    case 3:
      (this->*fp_level_[3])();
      break;
    default:
      Harl::fatal();
  }
}
