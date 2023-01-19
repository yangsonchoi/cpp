// Copyright 2023 Yangson Choi. All rights reserved.

#include <iostream>
#include <string>

#include "ex01/iter.hpp"

using std::cout;
using std::endl;

int main(void) {
  int i[6] = { 0 , 1, 2, 3, 4, 5 };
  double d[7] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
  char c[4] = { 'a', 'b', 'c', 'd' };

  iter(i, sizeof(i) / sizeof(*i), Increase);
  for (std::size_t j = 0; j < sizeof(i) / sizeof(*i); ++j)
    cout << i[j] << " ";
  std::cout << std::endl;

  iter(d, sizeof(d) / sizeof(*d), Increase);
  for (std::size_t j = 0; j < sizeof(d) / sizeof(*d); ++j)
    cout << d[j] << " ";
  std::cout << std::endl;

  iter(c, sizeof(c) / sizeof(*c), Increase);
  for (std::size_t j = 0; j < sizeof(c) / sizeof(*c); ++j)
    cout << c[j] << " ";
  std::cout << std::endl;

  return 0;
}
