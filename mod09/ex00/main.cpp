// Copyright 2022 Yangson Choi. All rights reserved.

#include "BitcoinExchange.hpp"

int	main(int argc, char** argv)
{
	std::string db_path = "./data.csv";
	if (argc != 2)
	{
		std::cout << "Error: could not open file.\n";
		return (0);
	}

	BitcoinExchange btc;

	btc.init_databse(db_path);
	btc.display_exchange(argv[1]);

	return (0);
}