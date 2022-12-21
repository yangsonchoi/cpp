// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>
#include <cmath>

#include "ex01/Fixed.hpp"

using std::cout;
using std::endl;
using std::ostream;

Fixed::Fixed() : value_(0) {
  cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed& f) : value_(f.value_) {
  cout << "Copy constructor called" << endl;
}

Fixed::Fixed(const int input) : value_(input << kFractionalBits) {
  cout << "Int constructor called" << endl;
}

Fixed::Fixed(const float input)
    : value_(roundf(input * (1 << kFractionalBits))) {
  cout << "Float constructor called" << endl;
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

float Fixed::toFloat() const {
  return static_cast<float>(value_) / (1 << kFractionalBits);
}

int Fixed::toInt() const {
  return value_ >> kFractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& f) {
  os << f.toFloat();
  return os;
}
