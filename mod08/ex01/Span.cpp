// Copyright 2022 Yangson Choi. All rights reserved.

#include "ex01/Span.hpp"

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

const char* Span::ToMuch::what(void) const throw() {
  return "To Much Element";
}

const char* Span::ToLittle::what(void) const throw() {
  return "To Little Element";
}

Span::Span(void) :  size_(0), store_(0) {}

Span::Span(std::size_t n) : size_(n), store_(0) {}

Span::Span(const Span& s)
  : size_(s.get_size()), store_(s.get_store()) {}

Span& Span::operator=(const Span& s) {
  if (this != &s) {
    size_ = s.get_size();
    store_ = s.get_store();
  }
  return *this;
}

Span::~Span(void) {}

std::size_t Span::get_size() const { return size_; }
const std::vector<int>& Span::get_store() const { return store_; }

void  Span::addNumber(int value) {
  if (store_.size() == size_)
    throw ToMuch();
  store_.push_back(value);
}

void Span::addRange(int begin, int end) {
  if (store_.size() + abs(end - begin) > size_)
    throw ToMuch();
  for (int i = begin; i < end; ++i)
    this->addNumber(i);
}

int Span::shortestSpan(void) {
  if (store_.size() < 2)
    throw ToLittle();
  int shortspan = INT_MAX;
  for (std::size_t i = 0; i < store_.size(); ++i) {
    for (std::size_t j = i + 1; j < store_.size(); ++j) {
      if (abs(store_[i] - store_[j]) < shortspan)
        shortspan = abs(store_[i] - store_[j]);
    }
  }
  return shortspan;
}

int Span::longestSpan(void) {
  if (store_.size() < 2)
    throw ToLittle();
  int max = *std::max_element(store_.begin(), store_.end());
  int min = *std::min_element(store_.begin(), store_.end());
  return max - min;
}



