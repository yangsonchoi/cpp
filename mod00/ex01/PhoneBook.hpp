// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD00_EX01_PHONEBOOK_HPP_
#define MOD00_EX01_PHONEBOOK_HPP_

#include <istream>
#include <string>

class Contact {
 public:
  std::istream& set_first_name(std::istream& input_stream) { return set_field(input_stream, first_); }
  std::istream& set_last_name(std::istream& input_stream) { return set_field(input_stream, last_); }
  std::istream& set_nickname(std::istream& input_stream) { return set_field(input_stream, nick_); }
  std::istream& set_phone_number(std::istream& input_stream) { return set_field(input_stream, phone_); }
  std::istream& set_darkest_secret(std::istream& input_stream) { return set_field(input_stream, secret_); }

  std::string first_name() const { return first_; }
  std::string last_name() const { return last_; }
  std::string nickname() const { return nick_; }
  std::string phone_number() const { return phone_; }
  std::string darkest_secret() const { return secret_; }

 private:
  std::istream& set_field(std::istream&, std::string&);

  std::string first_;
  std::string last_;
  std::string nick_;
  std::string phone_;
  std::string secret_;
};

class PhoneBook {
 public:
  PhoneBook() : index_(0) {}

  void AddContact();
  void SearchContact() const;

 private:
  void Add(const Contact&);
  void PrintAll() const;
  void PrintContact(size_t) const;

  std::string get_trunc(std::string) const;

  static const size_t kMaxContact = 8;
  static const size_t kColumnSize = 10;

  Contact contact_[kMaxContact];
  size_t index_;
};

#endif  // MOD00_EX01_PHONEBOOK_HPP_
