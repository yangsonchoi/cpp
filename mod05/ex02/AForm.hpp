// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD05_EX02_AFORM_HPP_
#define MOD05_EX02_AFORM_HPP_

#include <exception>
#include <string>

#include "ex02/Bureaucrat.hpp"

class Form {
 public :
  class GradeTooHighException : public std::exception {
   public:
      const char* what() const throw();
  };

  class GradeTooLowException : public std::exception {
   public:
      const char* what() const throw();
  };

  class FormNotSigned : public std::exception {
   public:
      const char* what() const throw();
  };

  Form();
  Form(const Form&);
  Form(const std::string&, const int& sign, const int& execute);

  Form& operator=(const Form&);

  virtual ~Form();

  const std::string& get_name() const { return name_; }
  const int& get_grade_sign() const { return grade_sign_; }
  const int& get_grade_execute() const { return grade_execute_; }
  const bool& get_signed() const { return signed_; }

  void BeSigned(const Bureaucrat&);
  virtual void execute(const Bureaucrat&) const = 0;

 protected :
  std::string name_;
  int grade_sign_;
  int grade_execute_;
  bool signed_;
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif  // MOD05_EX02_AFORM_HPP_
