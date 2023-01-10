// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD05_EX02_BUREAUCRAT_HPP_
#define MOD05_EX02_BUREAUCRAT_HPP_

#include <exception>
#include <string>

class Form;

#define GRADE_MAX           1
#define GRADE_MIN           150

class Bureaucrat {
 public:
  class GradeTooHighException : public std::exception {
   public:
      const char* what() const throw();
  };

  class GradeTooLowException : public std::exception {
   public:
      const char* what() const throw();
  };

  Bureaucrat(const Bureaucrat&);
  Bureaucrat(const std::string&, const int&);
  
  Bureaucrat& operator=(const Bureaucrat&);

  ~Bureaucrat();

  const std::string& get_name() const { return name_; }
  const int& get_grade() const { return grade_; }

  void IncrementGrade();
  void DecrementGrade();
  void SignForm(Form&) const;
  void ExecuteForm(Form&) const;

 private:
  Bureaucrat();

  std::string name_;
  int grade_;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b);

#endif  // MOD05_EX02_BUREAUCRAT_HPP_