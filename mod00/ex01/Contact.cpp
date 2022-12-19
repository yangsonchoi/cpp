// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex01/Contact.hpp"

using std::istream;
using std::string;
using std::ws;
using std::getline;

istream& Contact::set_field(istream& input_stream, string& set_string) {
  static const string kWhitespace = " \f\r\n\t\v";

  if (input_stream.fail())
    return input_stream;
  getline(input_stream >> ws, set_string);
  set_string.erase(set_string.find_last_not_of(kWhitespace) + 1);
  return input_stream;
}
