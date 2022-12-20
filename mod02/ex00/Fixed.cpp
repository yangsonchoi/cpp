// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>

#include "ex00/Fixed.hpp"

using std::cout;
using std::endl;

Fixed::Fixed() : value_(0) {
  cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed& f) : value_(f.value_) {
  cout << "Copy constructor called" << endl;
}

Fixed& Fixed::operator=(const Fixed& f) {
  cout << "Copy assignment operator called" << endl;
  value_ = f.getRawBits();
  return *this;
}

Fixed::~Fixed() {
  cout << "Destructor called" << endl;
}

int Fixed::getRawBits() const {
  cout << "getRawBits member function called" << endl;
  return value_;
}

void Fixed::setRawBits(const int input_num) {
  cout << "setRawBits member function called" << endl;
  value_ = input_num;
}
