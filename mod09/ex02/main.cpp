// Copyright 2023 Yangson Choi. All rights reserved.

#include "PmergeMe.hpp"
#include <iostream>

int main(int ac, char** av) {
	if (ac < 2) {
		std::cout << "usage: ./PMergeMe [numbers]\n";
		exit(EXIT_FAILURE);
	}
	PmergeMe sort;
  sort.execute(ac, av);
}