// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD02_EX01_FIXED_HPP_
#define MOD02_EX01_FIXED_HPP_

class Fixed {
 public:
  Fixed();
  Fixed(const Fixed&);
  explicit Fixed(const int);
  explicit Fixed(const float);

  Fixed& operator=(const Fixed&);

  ~Fixed();

  int getRawBits() const;
  void setRawBits(const int);
  float toFloat() const;
  int toInt() const;

 private:
  static const int kFractionalBits = 8;
  int value_;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif  // MOD02_EX01_FIXED_HPP_
