// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD02_EX02_FIXED_HPP_
#define MOD02_EX02_FIXED_HPP_

class Fixed {
 public:
  Fixed();
  Fixed(const Fixed&);
  explicit Fixed(const int);
  explicit Fixed(const float);

  Fixed& operator=(const Fixed&);
  Fixed operator+(const Fixed& f) const;
  Fixed operator-(const Fixed& f) const;
  Fixed operator*(const Fixed& f) const;
  Fixed operator/(const Fixed& f) const;
  bool operator>(const Fixed& f) const;
  bool operator<(const Fixed& f) const;
  bool operator>=(const Fixed& f) const;
  bool operator<=(const Fixed& f) const;
  bool operator==(const Fixed& f) const;
  bool operator!=(const Fixed& f) const;
  Fixed& operator++(void) ;
  Fixed& operator--(void) ;
  Fixed operator++(int) ;
  Fixed operator--(int) ;

  ~Fixed();

  int getRawBits() const;
  void setRawBits(const int);
  float toFloat() const;
  int toInt() const;
  static Fixed* min(Fixed* lhs, Fixed* rhs);
  static Fixed* max(Fixed* lhs, Fixed* rhs);
  static const Fixed& min(const Fixed& lhs, const Fixed& rhs);
  static const Fixed& max(const Fixed& lhs, const Fixed& rhs);

 private:
  static const int kFractionalBits = 8;
  int value_;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif  // MOD02_EX02_FIXED_HPP_
