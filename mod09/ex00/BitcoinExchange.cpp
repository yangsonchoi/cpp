// Copyright 2023 Yangson Choi. All rights reserved.

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj) {
	*this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj) {
	if (this != &obj)
	{
		date_ = obj.date_;
		value_ = obj.value_;
		year_ = obj.year_;
		month_ = obj.month_;
		day_ = obj.day_;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}


bool BitcoinExchange::checkValidDate() {
	time_t timer = time(NULL);
	struct tm* t = localtime(&timer);
	if (year_ > 2023 || (year_ == 2023 && (month_ > t->tm_mon + 1 || (month_ == t->tm_mon + 1 && day_ > t->tm_mday))))
		return (false);
	if (month_ < 1 || month_ > 12 || day_ < 1 || day_ > 31)
		return (false);
	if (month_ == 2) {
		if ((year_ % 400 == 0 || (year_ % 4 == 0 && year_ % 100 != 0)) && day_ < 30)
			return (true);
		else if (day_ > 28)
			return (false);
	}
	else if ((month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11) && day_ > 30)
		return (false);
	return (true);
}

bool BitcoinExchange::convertDate(std::string const& date) {
	std::stringstream ss(date);
	ss >> year_;
	if (ss.get() != '-' || !std::isdigit(ss.peek()))
		return (false);
	ss >> month_;
	if (ss.get() != '-' || !std::isdigit(ss.peek()))
		return (false);
	ss >> day_;
	if (!ss.eof())
		return (false);
	return (true);
}

bool BitcoinExchange::splitAndCheckDate(std::string const& date) {
	if (date.length() != 10)
		return (false);
	if (!convertDate(date))
		return (false);
	if (!checkValidDate())
		return (false);
	return (true);
}

bool BitcoinExchange::splitAndCheckInput(std::string const& input) {
	int len = input.length();
	int i;
	char* end;

	for (i = 0; i < len; i++) {
		if (input[i] == '|')
			break;
	}
	if (i == len || len < 14 || input[i - 1] != ' ' || input[i + 1] != ' ') {
		std::cerr << "Error: bad input => " << input << std::endl;
		return (false);
	}
	date_ = input.substr(0, i - 1);
	if (!splitAndCheckDate(date_)) {
		std::cerr << "Error: bad input => " << input << std::endl;
		return (false);
	}
	end = NULL;
	value_ = strtod((input.substr(i + 2)).c_str(), &end);
	if (*end != '\0') {
		std::cerr << "Error: bad input => " << input << std::endl;
		return (false);
	}
	if (value_ < 0) {
		std::cerr << "Error: not a positive number.\n";
		return (false);
	}
	if (value_ > 1000) {
		std::cerr << "Error: too large a number.\n";
		return (false);
	}
	return (true);
}

std::string BitcoinExchange::getDate() const {
	return date_;
}

double BitcoinExchange::getValue() const {
	return value_;
}
