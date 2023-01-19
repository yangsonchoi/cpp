// Copyright 2023 Yangson Choi. All rights reserved.

#include <iostream>
#include <vector>
#include <iterator>

#include "ex01/Span.hpp"

int main() {
  Span sp = Span(5);

  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  try {
    sp.addNumber(15);
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  Span Range(10000);

  Range.addRange(10, 10010);
  std::vector<int> temp = Range.get_store();
  std::cout << *temp.begin() << std::endl;
  std::cout << *(temp.end() - 1) << std::endl;
  std::cout << Range.shortestSpan() << std::endl;
  std::cout << Range.longestSpan() << std::endl;

  return 0;
}
