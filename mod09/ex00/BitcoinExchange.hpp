// Copyright 2023 Yangson Choi. All rights reserved.

#ifndef EX00_BITCOINEXCHANGE_HPP_
#define EX00_BITCOINEXCHANGE_HPP_


# include <iostream>
# include <fstream>
# include <map>
# include <string>
# include <cstdlib>
# include <sstream>
# include <iomanip>

# define BAD_INPUT -1
# define NOT_POSITVE -2
# define TOO_LARGE -3
# define VALID_INPUT 1

class BitcoinExchange {

  public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& obj);
    BitcoinExchange& operator=(const BitcoinExchange &obj);
    ~BitcoinExchange();

    void    init_databse(const std::string & db_path) const;
    void    display_exchange(const std::string & infile) const;

  private:

    double  get_value(const std::string & data) const;


    int     is_valid_input( const std::string & input_line, std::string & input_date, double* input_nb_btc ) const;
    bool    is_valid_year(const std::string & year) const;
    bool    is_valid_month(const std::string & month) const;
    bool    is_valid_day(const std::string & day) const;
    int     is_valid_input_nb_btc(double input_nb_btc) const;

    static std::map<std::string, double> db_btc_;

};

#endif  //EX00_BITCOINEXCHANGE_HPP_