// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD05_EX03_ROBOTOMYREQUESTFORM_HPP_
#define MOD05_EX03_ROBOTOMYREQUESTFORM_HPP_

#include "ex03/AForm.hpp"

#define R_GRADE_SIGN 72
#define R_GRADE_EXE 45
#define R_REQUEST "Robotmy Request"

class RobotomyRequestForm : public Form {
 public :
  RobotomyRequestForm(const RobotomyRequestForm&);
  RobotomyRequestForm(const std::string&);

  RobotomyRequestForm& operator=(const RobotomyRequestForm&);

  virtual ~RobotomyRequestForm();

  void execute(const Bureaucrat&) const;

 private :
  RobotomyRequestForm();
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif  // MOD05_EX03_ROBOTOBYREQUESTFORM_HPP_