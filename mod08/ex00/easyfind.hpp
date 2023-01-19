// Copyright 2023 Yangson Choi. All rights reserved.

#ifndef EX00_EASYFIND_HPP_
#define EX00_EASYFIND_HPP_

#include <vector>
#include <algorithm>
#include <exception>
#include <iostream>

class NotFound : public std::exception {
  public:
  const char* what() const throw() {
    return "Not found";
  }
};

template <typename T>
typename T::iterator easyfind(T& container, int value) {
  typename T::iterator iter;

  iter = std::find(container.begin(), container.end(), value);
  if (iter == container.end())
    throw NotFound();
  return iter;
}



#endif  // EX00_EASYFIND_HPP_