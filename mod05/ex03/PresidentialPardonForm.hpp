// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD05_EX03_PRESIDENTIALPARDONFORM_HPP_
#define MOD05_EX03_PRESIDENTIALPARDONFORM_HPP_

#include "ex03/AForm.hpp"

#define P_GRADE_SIGN 25
#define P_GRADE_EXE 5
#define P_REQUEST "Pardon Request"

class PresidentialPardonForm : public Form {
 public :
  PresidentialPardonForm(const PresidentialPardonForm&);
  PresidentialPardonForm(const std::string&);

  PresidentialPardonForm& operator=(const PresidentialPardonForm&);

  virtual ~PresidentialPardonForm();

  void execute(const Bureaucrat&) const;

 private :
  PresidentialPardonForm();
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif  // MOD05_EX03_PRESIDENTIALPARDONFORM_HPP_