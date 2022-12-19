// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD00_EX01_PHONEBOOK_HPP_
#define MOD00_EX01_PHONEBOOK_HPP_

#include <istream>
#include <string>

#include "ex01/Contact.hpp"

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
