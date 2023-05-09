// Copyright 2023 Yangson Choi. All rights reserved.

#ifndef EX00_EASYFIND_HPP_
#define EX00_EASYFIND_HPP_

class BitcoinExchange {


  public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& obj);
    BitcoinExchange& operator=(const BitcoinExchange &obj);
    ~BitcoinExchange();

    void stringToMap();
    bool checkValidDate();
    bool convertDate(std::string const& date);
    bool splitAndCheckDate(std::string const& date);
    bool splitAndCheckInput(std::string const& input);

    std::string getDate() const;
    double getValue() const;

  private:
    std::string date_;
    int year_;
    int month_;
    int day_;
    double value_;
};

#endif  // EX00_EASYFIND_HPP_