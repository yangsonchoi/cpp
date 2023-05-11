// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>

#include "RPN.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "usage: ./main \"expression\"\n";
		return (0);
	}
	RPN rpn;
	rpn.execute(argv[1]);
	return (0);
}