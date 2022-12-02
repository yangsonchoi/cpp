// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex01/PhoneBook.hpp"

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::streamsize;
using std::string;
using std::ws;

static const string kWhitespace = " \f\r\n\t\v";

int main() {
  PhoneBook pb;
  string cmd;
  while (true) {
    cout << "Enter a command(ADD, SEARCH, EXIT): ";
    getline(cin >> ws, cmd);
    cmd.erase(cmd.find_last_not_of(kWhitespace));
    if (cin.fail() || cmd == "EXIT") {
      break;
    } else if (cmd == "ADD") {
      pb.AddContact();
    } else if (cmd == "SEARCH") {
      pb.SearchContact();
    }
  }
}