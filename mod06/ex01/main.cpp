// Copyright 2023 Yangson Choi. All rights reserved.

#include <string>
#include <iostream>

#include "ex01/Serialization.hpp"

using std::cout;
using std::endl;

uintptr_t serialize(data* ptr) {
  return reinterpret_cast<uintptr_t>(ptr);
}

data* deserialize(uintptr_t s_ptr) {
  return reinterpret_cast<data*>(s_ptr);
}

int main(void) {
  data source;
  uintptr_t s_ptr;
  data* d_ptr;

  source.str = "hello";
  source.i = 42;

  s_ptr = serialize(&source);
  d_ptr = deserialize(s_ptr);

  cout << "source address: " << &source << endl;
  cout << "source str: " << source.str << endl;
  cout << "source i: " << source.i << endl << endl;

  cout << "s_ptr value: " << s_ptr << endl << endl;
  cout << "d_ptr value: " << d_ptr << endl;

  cout << "d_ptr str: " << d_ptr->str << endl;
  cout << "d_ptr i: " << d_ptr->i << endl << endl;

  source.str = "world";
  source.i = -42;

  cout << "source address: " << &source << endl;
  cout << "source str: " << source.str << endl;
  cout << "source i: " << source.i << endl << endl;

  cout << "d_ptr value: " << d_ptr << endl;
  cout << "d_ptr str: " << d_ptr->str << endl;
  cout << "d_ptr i: " << d_ptr->i << endl << endl;;

  return 0;
}
