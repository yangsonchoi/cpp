// Copyright 2023 Yangson Choi. All rights reserved.

#include <exception>
#include <iostream>
#include <ctime>

#include "ex02/Base.hpp"

using std::cout;
using std::endl;
using std::exception;

Base* generate() {
  Base* result;

  int random_int = std::rand();
  switch (random_int % 3) {
    case 0 :
      result = new A();
      break;
    case 1 :
      result = new B();
      break;
    case 2 :
      result = new C();
      break;
    default :
      result = NULL;
  }
  return (result);
}

void identify(Base *ptr) {
  if (dynamic_cast<A*>(ptr)) {
    cout << "I am A" << endl;
  } else if (dynamic_cast<B*>(ptr)) {
    cout << "I am B" << endl;
  } else if (dynamic_cast<C*>(ptr)) {
    cout << "I am C" << endl;
  } else {
    cout << "Who am I???" << endl;
  }
}

void identify(Base& ref) {
  try {
    A temp_a = dynamic_cast<A&>(ref);
    cout << "I am A" << endl;
    static_cast<void>(temp_a);
  } catch (exception& e) {
    try { 
      B temp_b = dynamic_cast<B&>(ref);
      cout << "I am B" << endl;
      static_cast<void>(temp_b);
    } catch (exception& e) {
      try {
        C temp_c = dynamic_cast<C&>(ref);
        cout << "I am C" << endl;
        static_cast<void>(temp_c);
      } catch (exception& e) {
        cout << "Who am I???" << endl;
      }
    }
  }
}

int main() {
  std::srand(std::time(0));

  Base* a_ptr = new A();
  Base* b_ptr = new B();
  Base* c_ptr = new C();
  Base* base_ptr = new Base();
  Base* random_ptr = generate();

  identify(a_ptr);
  identify(b_ptr);
  identify(c_ptr);
  identify(base_ptr);
  identify(random_ptr);

  Base& a_ref = *a_ptr;
  Base& b_ref = *b_ptr;
  Base& c_ref = *c_ptr;
  Base& base_ref = *base_ptr;
  Base& random_ref = *random_ptr;

  identify(a_ref);
  identify(b_ref);
  identify(c_ref);
  identify(base_ref);
  identify(random_ref);

  delete a_ptr;
  delete b_ptr;
  delete c_ptr;
  delete base_ptr;
  delete random_ptr;

  return 0;
}
