// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>
#include <cmath>

#include "ex02/Fixed.hpp"

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

Fixed Fixed::operator+(const Fixed& f) const {
  Fixed temp(this->toFloat() + f.toFloat());
  return temp;
}

Fixed Fixed::operator-(const Fixed& f) const {
  Fixed temp(this->toFloat() - f.toFloat());
  return temp;
}

Fixed Fixed::operator*(const Fixed& f) const {
  Fixed temp(this->toFloat() * f.toFloat());
  return temp;
}

Fixed Fixed::operator/(const Fixed& f) const {
  Fixed temp(this->toFloat() / f.toFloat());
  return temp;
}

bool Fixed::operator>(const Fixed& f) const {
  return value_ > f.getRawBits();
}

bool Fixed::operator<(const Fixed& f) const {
  return value_ < f.getRawBits();
}

bool Fixed::operator>=(const Fixed& f) const {
  return value_ >= f.getRawBits();
}

bool Fixed::operator<=(const Fixed& f) const {
  return value_ <= f.getRawBits();
}

bool Fixed::operator==(const Fixed& f) const {
  return value_ == f.getRawBits();
}

bool Fixed::operator!=(const Fixed& f) const {
  return value_ != f.getRawBits();
}

Fixed& Fixed::operator++(void) {
  ++value_;
  return *this;
}

Fixed Fixed::operator--(void) {
  --value_;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed temp = *this;
  ++value_;
  return temp;
}

Fixed Fixed::operator--(int) {
  Fixed temp = *this;
  --value_;
  return temp;
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

Fixed* Fixed::min(Fixed* lhs, Fixed* rhs) {
  if ((*lhs).getRawBits() < (*rhs).getRawBits())
    return lhs;
  return rhs;
}

Fixed* Fixed::max(Fixed* lhs, Fixed* rhs) {
  if ((*lhs).getRawBits() > (*rhs).getRawBits())
    return lhs;
  return rhs;
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs) {
  if (lhs.getRawBits() < rhs.getRawBits())
    return lhs;
  return rhs;
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs) {
  if (lhs.getRawBits() > rhs.getRawBits())
    return lhs;
  return rhs;
}

std::ostream& operator<<(std::ostream& os, const Fixed& f) {
  os << f.toFloat();
  return os;
}
