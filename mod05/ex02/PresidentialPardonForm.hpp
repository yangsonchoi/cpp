// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD05_EX02_PRESIDENTIALPARDONFORM_HPP_
#define MOD05_EX02_PRESIDENTIALPARDONFORM_HPP_

#include "ex02/AForm.hpp"

#define P_GRADE_SIGN 25
#define P_GRADE_EXE 5

class PresidentialPardonForm : public Form {
 public :
  PresidentialPardonForm(const PresidentialPardonForm&);
  PresidentialPardonForm(const std::string&);
  PresidentialPardonForm(const std::string&, const int& sign, const int& execute);

  PresidentialPardonForm& operator=(const PresidentialPardonForm&);

  virtual ~PresidentialPardonForm();

  void execute(const Bureaucrat&) const;

 private :
  PresidentialPardonForm();
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif  // MOD05_EX02_PRESIDENTIALPARDONFORM_HPP_