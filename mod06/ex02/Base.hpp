// Copyright 2023 Yangson Choi. All rights reserved.

#ifndef MOD06_EX02_BASE_HPP_
#define MOD06_EX02_BASE_HPP_

#include <string>
#include <exception>

class Base {
 public:
  virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif  // MOD06_EX02_BASE_HPP_