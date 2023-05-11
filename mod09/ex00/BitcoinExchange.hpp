// Copyright 2023 Yangson Choi. All rights reserved.

#ifndef EX00_BITCOINEXCHANGE_HPP_
#define EX00_BITCOINEXCHANGE_HPP_


#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cstdlib>
#include <sstream>
#include <iomanip>

#define BAD_INPUT -1
#define NOT_POSITVE -2
#define TOO_LARGE -3
#define VALID_INPUT 1

class BitcoinExchange {

  public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange&);
    BitcoinExchange& operator=(const BitcoinExchange &);
    ~BitcoinExchange();

    void    initDatabse(const std::string &) const;
    void    displayExchange(const std::string &) const;

  private:

    double  get_value(const std::string &) const;


    int     is_valid_input( const std::string &, std::string &, double*) const;
    bool    is_valid_year(const std::string &) const;
    bool    is_valid_month(const std::string & ) const;
    bool    is_valid_day(const std::string &) const;
    int     is_valid_input_nb_btc(double) const;

    static std::map<std::string, double> db_btc_;

};

#endif  //EX00_BITCOINEXCHANGE_HPP_