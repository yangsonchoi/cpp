// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex05/Harl.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

static void Harl::(*fpComplain[kLevelCount])(void) {

}

void Harl::debug(void) {
  cout << "I love to get extra bacon for my "
    << "7XL-double-cheese-triple-pickle-special-ketchup burger." << endl
    << "I just love it!"
    << endl << endl;
}

void Harl::info(void) {
  cout << "I cannot believe adding extra bacon cost more money." << endl
    << "You don’t put enough!"<< endl 
    << "If you did I would not have to ask for it!"
    << endl << endl;
}

void Harl::warning(void) {
  cout << "I think I deserve to have some extra bacon for free." << endl
    << "I’ve been coming here for years and "
    << "you just started working here last month."
    << endl << endl;
}

void Harl::error(void) {
  cout << "This is unacceptable, I want to speak to the manager now."
    << endl << endl;
}