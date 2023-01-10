// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD05_EX02_SHRUBBERYCREATIONFORM_HPP_
#define MOD05_EX02_SHRUBBERYCREATIONFORM_HPP_

#include "ex02/AForm.hpp"

#define S_GRADE_SIGN 145
#define S_GRADE_EXE 137

class ShrubberyCreationForm : public Form {
 public :
  ShrubberyCreationForm(const ShrubberyCreationForm&);
  ShrubberyCreationForm(const std::string&);
  ShrubberyCreationForm(const std::string&, const int& sign, const int& execute);

  ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);

  virtual ~ShrubberyCreationForm();

  void execute(const Bureaucrat&) const;

 private :
  ShrubberyCreationForm();
};

#endif  // MOD05_EX02_SHRUBBERYCREATIONFORM_HPP_
