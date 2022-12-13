// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>
#include <string>

#include "PhoneBook.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::streamsize;
using std::string;
using std::ws;


int main() {
  PhoneBook pb;
  string cmd;

  static const string kWhitespace = " \f\r\n\t\v";

  while (true) {
    cout << "Enter a command(ADD, SEARCH, EXIT): ";
    getline(cin >> ws, cmd);
    cmd.erase(cmd.find_last_not_of(kWhitespace) + 1);
    if (cin.fail() || cmd == "EXIT") {
      break;
    } else if (cmd == "ADD") {
      pb.AddContact();
    } else if (cmd == "SEARCH") {
      pb.SearchContact();
    }
  }
}