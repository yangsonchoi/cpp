// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD05_EX02_ROBOTOBYREQUESTFORM_HPP_
#define MOD05_EX02_ROBOTOBYREQUESTFORM_HPP_

#include "ex02/AForm.hpp"

#define R_GRADE_SIGN 72
#define R_GRADE_EXE 45

class RobotomyRequestForm : public Form {
 public :
  RobotomyRequestForm(const RobotomyRequestForm&);
  RobotomyRequestForm(const std::string&);
  RobotomyRequestForm(const std::string&, const int& sign, const int& execute);

  RobotomyRequestForm& operator=(const RobotomyRequestForm&);

  virtual ~RobotomyRequestForm();

  void execute(const Bureaucrat&) const;

 private :
  RobotomyRequestForm();
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif  // MOD05_EX02_ROBOTOBYREQUESTFORM_HPP_