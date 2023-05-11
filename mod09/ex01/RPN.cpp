#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &obj) {
	*this = obj;
}

RPN& RPN::operator=(const RPN& obj) {
	if (this != &obj) {
		stack_ = obj.stack_;
	}
	return *this;
}

RPN::~RPN() {}

void	RPN::execute_operation(char* expr) {
	double		operand_1, operand_2;

	int			i;

	if (!expr) {
		std::cout << "Error\n";
		return ;
	}

	i = 0;

	while (expr[i]) {
		if (expr[i] == ' ') {
			++i;
		} else if (isdigit(expr[i])) {
			char	tmp[11];
			int		tmp_len = 0;
			double	opr = 0;

			while(isdigit(expr[i])) {
				tmp[tmp_len] = expr[i];
				++i;
				tmp_len++;
			}
			tmp[tmp_len] = '\0';
			opr = std::atoi(tmp);
			this->stack_.push(opr);
		} else if (this->is_operation(expr[i])) {
			if (this->stack_.size() >= 2) {
				operand_1 = this->stack_.top();
				this->stack_.pop();
				operand_2 = this->stack_.top();
				this->stack_.pop();
				this->calculate(operand_1, operand_2, expr[i]);
			} else {
				std::cout << "Error\n";
				return ;
			}
			++i;
		} else {
			std::cout << "Error\n";
			return ;
		}
	}
	if (this->stack_.size() != 1 ) {
		std::cout << "Error\n";
		return ;
	}
	std::cout << this->stack_.top() << "\n";
}

bool	RPN::is_operation(char c) {
	if (c == '-' || c == '+') {
		return true;
	}
	if (c == '*' || c == '/'){
		return true;
	}
	return false;
}

void RPN::calculate(double op1, double op2, char opt) {
	double tmp_stack;

	if (opt == '+') {
		tmp_stack = op1 + op2;
	} else if (opt == '-') {
		tmp_stack = op2 - op1;
	} else if (opt == '/') {
		tmp_stack = op2 / op1;
	} else if (opt == '*') {
		tmp_stack = op1 * op2;
	} 
	this->stack_.push(tmp_stack);
}