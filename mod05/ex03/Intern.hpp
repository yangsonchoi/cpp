// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD05_EX03_INTERN_HPP_
#define MOD05_EX03_INTERN_HPP_

#include <string>

#include "ex03/AForm.hpp"

class Intern {
 public:
  class TypeNotFoundExcenption : public std::exception {
   public:
      const char* what(void) const throw();
  };

  Intern();
  Intern(const Intern&);

  Intern& operator=(const Intern&);

  ~Intern();

  Form* MakeForm(const std::string& type, const std::string& name);

 private :
  static const size_t kFormCount = 3;
  static const char* const p_form_type[kFormCount];
};

#endif  // MOD05_EX03_INTERN_HPP_