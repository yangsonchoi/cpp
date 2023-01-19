// Copyright 2023 Yangson Choi. All rights reserved.

#ifndef EX01_SPAN_HPP_
#define EX01_SPAN_HPP_

#include <vector>
#include <algorithm>
#include <exception>
#include <iostream>

class Span {
 public:
  class ToMuch : public std::exception {
   public:
      const char* what(void) const throw();
  };
  class ToLittle : public std::exception {
   public:
      const char* what(void) const throw();
  };

  Span(void);
  explicit Span(std::size_t n);
  Span(const Span& s);

  Span& operator=(const Span& s);

  ~Span(void);

  std::size_t get_size() const;
  const std::vector<int>& get_store() const;


  void addNumber(int value);
  void addRange(int begin, int end);

  int shortestSpan(void);
  int longestSpan(void);

 private:
  std::size_t size_;
  std::vector<int> store_;
};

#endif  // EX01_SPAN_HPP_