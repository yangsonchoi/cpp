// Copyright 2023 Yangson Choi. All rights reserved.

#include <iostream>
#include <stack>
#include <list>

#include "ex02/MutantStack.hpp"

int main() {
  {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
    std::cout << std::endl;

    std::cout << "test copy constructor" << std::endl;
    MutantStack<int> CopyConStack(mstack);
    MutantStack<int>::iterator Cit = CopyConStack.begin();
    MutantStack<int>::iterator Cite = CopyConStack.end();
    ++Cit;
    --Cit;
    while (Cit != Cite) {
      std::cout << *Cit << std::endl;
      ++Cit;
    }
    std::cout << std::endl;

    std::cout << "test copy operator" << std::endl;
    MutantStack<int> CopyOperStack(mstack);
    MutantStack<int>::iterator Oit = CopyOperStack.begin();
    MutantStack<int>::iterator Oite = CopyOperStack.end();
    ++Oit;
    --Oit;
    while (Oit != Oite) {
      std::cout << *Oit << std::endl;
      ++Oit;
    }
    std::cout << std::endl;

    std::cout << "test stack" << std::endl;
    std::stack<int> s(mstack);
    std::size_t size = s.size();
    for (std::size_t i = 0; i < size; ++i) {
      std::cout << s.top() << std::endl;
      s.pop();
    }
    std::cout << std::endl;
  }

  {
    std::cout << "test list" << std::endl;
    std::list<int> mlist;

    mlist.push_back(5);
    mlist.push_back(17);
    std::cout << mlist.front() << std::endl;
    mlist.pop_back();
    std::cout << mlist.size() << std::endl;
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    mlist.push_back(0);

    std::list<int>::iterator it = mlist.begin();
    std::list<int>::iterator ite = mlist.end();
    ++it;
    --it;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
    std::cout << std::endl;
    // std::stack<int> s(mlist);
  }
  return 0;
}
