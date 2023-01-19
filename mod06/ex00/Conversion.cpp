// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex00/Conversion.hpp"

#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>

using std::cout;
using std::endl;

const char* Conversion::InvalidInput::what(void) const throw() {
  return "Invalid Input";
}

Conversion::Conversion(void) : value_(0.0) {}

Conversion::Conversion(const std::string& input)
  : value_(0.0) {
    char* ptr = NULL;
    value_ = std::strtod(input.c_str(), &ptr);
    if (*ptr != 0 && std::strcmp(ptr, "f") != 0)
      throw InvalidInput();
}

Conversion::Conversion(const Conversion& c)
  : value_(c.get_value()) {}

Conversion& Conversion::operator=(const Conversion& c) {
  if (this != &c) {
    this->value_ = c.get_value();
  }
  return *this;
}

Conversion::~Conversion(void) {}


const double& Conversion::get_value(void) const {
  return value_;
}

char Conversion::get_char(void) const {
  return static_cast<char>(value_);
}

int Conversion::get_int(void) const {
  return static_cast<int>(value_);
}

float Conversion::get_float(void) const {
  return static_cast<float>(value_);
}

double Conversion::get_double(void) const {
  return value_;
}

void PrintChar(std::ostream& out, const Conversion& c) {
  out << "char: ";
  if (std::isnan(c.get_value()) || std::isinf(c.get_value())) {
    out << "impossible" << endl;
  } else if (std::isprint(c.get_char())) {
    out << "'" << c.get_char() << "'" << endl;
  } else {
    out << "Non displayable" << endl;
  }
}

void PrintInt(std::ostream& out, const Conversion& c) {
  out << "int: ";
  if (std::isnan(c.get_value()) || std::isinf(c.get_value()) ||
      c.get_value() > INT_MAX || c.get_value() < INT_MIN) {
    out << "impossible" << endl;
  } else {
    out << c.get_int() << endl;
  }
}

void PrintReal(std::ostream& out, const Conversion& c) {
  if (std::isnan(c.get_value()) || std::isinf(c.get_value())) {
    out << "float: " << std::showpos << c.get_float() << "f" << endl;
    out << "double: " << std::showpos << c.get_double() << endl;
    return;
  }
  if (c.get_float() == static_cast<int64_t>(c.get_float())) {
    out << "float: " << c.get_float() << ".0f" << endl;
  } else {
    out << "float: " << c.get_float() << "f" << endl;
  }
  if (c.get_double() == static_cast<int64_t>(c.get_double())) {
    out << "double: " << c.get_double() << ".0" << endl;
  } else {
    out << "double: " << c.get_double() << endl;
  }
}

std::ostream& operator<<(std::ostream& out, const Conversion& c) {
  PrintChar(out, c);
  PrintInt(out, c);
  PrintReal(out, c);
  return out;
}
