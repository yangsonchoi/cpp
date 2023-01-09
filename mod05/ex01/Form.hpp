// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD04_EX01_FORM_HPP_
#define MOD04_EX01_FORM_HPP_

#include <exception>
#include <string>

#include "ex01/Bureaucrat.hpp"

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

  Form(const Form&);
  Form(const std::string&, const int& sign, const int& execute);

  Form& operator=(const Form&);

  ~Form();

  const std::string& get_name() const { return name_; }
  const int& get_grade_sign() const { return grade_sign_; }
  const int& get_grade_execute() const { return grade_execute_; }
  const bool& get_signed() const { return signed_; }

  void BeSigned(const Bureaucrat&);

 private :
  Form();

  std::string name_;
  int grade_sign_;
  int grade_execute_;
  bool signed_;
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif  // MOD04_EX01_FORM_HPP_
