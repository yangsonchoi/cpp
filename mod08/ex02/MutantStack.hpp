// Copyright 2023 Yangson Choi. All rights reserved.

#ifndef EX02_MUTANTSTACK_HPP_
#define EX02_MUTANTSTACK_HPP_

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
  MutantStack(void) {}
  MutantStack(const MutantStack& m) { *this = m; }

  MutantStack& operator=(const MutantStack& m) {
    if (this != &m) {
      this->c = m.c;
    }
    return *this;
  }

  ~MutantStack(void) {}

  typedef typename std::stack<T>::container_type::iterator iterator;
  iterator begin(void) { return this->c.begin(); }
  iterator end(void) { return this->c.end(); }
};

#endif  // EX02_MUTANTSTACK_HPP_