// Copyright 2023 Yangson Choi. All rights reserved.

#ifndef MOD06_EX00_CONVERSION_HPP_
#define MOD06_EX00_CONVERSION_HPP_

#include <string>
#include <exception>

class Conversion {
 public:
  class InvalidInput : public std::exception {
   public:
    const char* what() const throw();
  };

  Conversion(const Conversion& c);
  Conversion(const std::string& input);

  Conversion& operator=(const Conversion& c);

  ~Conversion(void);

  const double& get_value(void) const;

  char get_char(void) const;
  int get_int(void) const;
  float get_float(void) const;
  double get_double(void) const;

  void PrintChar(std::ostream& out, const Conversion& c);
  void PrintInt(std::ostream& out, const Conversion& c);
  void PrintReal(std::ostream& out, const Conversion& c);

 private:
  Conversion(void);

  double value_;

};

std::ostream& operator<<(std::ostream& o, const Conversion& c);

#endif  // MOD06_EX00_CONVERSION_HPP_