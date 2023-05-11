// Copyright 2023 Yangson Choi. All rights reserved.

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <exception>

class RPN {
  public:
	RPN(void);
	RPN(const RPN&);
	RPN& operator=(const RPN &);

	~RPN(void);

	void  execute(char *);

  private:

	std::stack<double> stack_;

	bool is_operation(char);
	void calculate(double, double, char);
};

#endif