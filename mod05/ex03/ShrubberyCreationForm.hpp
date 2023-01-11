// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD05_EX03_SHRUBBERYCREATIONFORM_HPP_
#define MOD05_EX03_SHRUBBERYCREATIONFORM_HPP_

#include "ex03/AForm.hpp"

#define S_GRADE_SIGN 145
#define S_GRADE_EXE 137
#define S_REQUEST "Shrubbery Request"

class ShrubberyCreationForm : public Form {
 public :
  ShrubberyCreationForm(const ShrubberyCreationForm&);
  ShrubberyCreationForm(const std::string&);

  ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);

  virtual ~ShrubberyCreationForm();

  void execute(const Bureaucrat&) const;

 private :
  ShrubberyCreationForm();
};

#endif  // MOD05_EX03_SHRUBBERYCREATIONFORM_HPP_
