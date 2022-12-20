// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD02_EX00_FIXED_HPP_
#define MOD02_EX00_FIXED_HPP_

class Fixed {
 public:
  Fixed();
  Fixed(const Fixed&);
  Fixed& operator=(const Fixed&);
  ~Fixed();

  int getRawBits() const;
  void setRawBits(const int);

 private:
  static const int kFractionlBits = 8;
  int value_;
};

#endif  // MOD02_EX00_FIXED_HPP_
