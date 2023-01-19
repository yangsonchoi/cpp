// Copyright 2023 Yangson Choi. All rights reserved.

#include <iostream>
#include <vector>
#include <iterator>

#include "ex00/easyfind.hpp"

int main(void) {
  std::vector<int> container;

  for (int i = 0 ; i < 10 ; ++i)
    container.push_back(i);
  try {
    int target = 5;

    std::vector<int>::iterator iter = easyfind(container, target);
    std::cout << "Value " << target << " is found on Index "
              << std::distance(container.begin(), iter) << std::endl;
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

  try {
    int target = 11;

    std::vector<int>::iterator iter = easyfind(container, target);
    std::cout << "Value " << target << " is found on Index "
              << std::distance(container.begin(), iter) << std::endl;
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}
