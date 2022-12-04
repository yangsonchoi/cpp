// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex01/PhoneBook.hpp"

#include <iostream>
#include <string>

using std::istream;
using std::string;
using std::ws;
using std::cin;
using std::cout;
using std::endl;
using std::exit;
using std::numeric_limits;
using std::streamsize;



istream& Contact::set_field(istream& input_stream, string& set_string) {
  static const string kWhitespace = " \f\r\n\t\v";

  if (input_stream.fail())
    return input_stream;
  getline(input_stream >> ws, set_string);
  set_string.erase(set_string.find_last_not_of(kWhitespace));
  return input_stream;
}

void PhoneBook::Add(const Contact& New) {
  contact_[index_++ % kMaxContact] = New;
}

void  PhoneBook::AddContact() {
  Contact TempContact;
  cout << "Enter first name: ";
  if (!TempContact.set_first_name(cin))
    exit(EXIT_FAILURE);
  cout << "Enter last name: ";
  if (!TempContact.set_last_name(cin))
    exit(EXIT_FAILURE);
  cout << "Enter nickname: ";
  if (!TempContact.set_nickname(cin))
    exit(EXIT_FAILURE);
  cout << "Enter phone number: ";
  if (!TempContact.set_phone_number(cin))
    exit(EXIT_FAILURE);
  cout << "Enter darkest secret: ";
  if (!TempContact.set_darkest_secret(cin))
    exit(EXIT_FAILURE);
  Add(TempContact);
}

void PhoneBook::PrintAll() const {
  cout << "Index     |First     |Last      |Nickname" << endl;
  for (size_t i = 0; i != kMaxContact; ++i) {
    cout << i << "        " << "|";
    cout << contact_[i].first_name() << "|";
    cout << contact_[i].last_name() << "|";
    cout << contact_[i].nickname() << endl;
  }
}

void PhoneBook::SearchContact() const {
  PrintAll();
  size_t i;
  cout << "Enter index: ";
  cin >> i;
  if (cin.fail()) {
    cout << "Wrong index." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  PrintContact(i);
}

void PhoneBook::PrintContact(size_t i) const {
  if (i >= kMaxContact || i >= index_) {
    cout << "Index out of range." << endl;
    return;
  }
  const Contact& c = contact_[i];
  cout << "First name: " << c.first_name() << endl;
  cout << "Last name: " << c.last_name() << endl;
  cout << "Nickname: " << c.nickname() << endl;
  cout << "Phone number: " << c.phone_number() << endl;
  cout << "Darkest secret: " << c.darkest_secret() << endl;
}