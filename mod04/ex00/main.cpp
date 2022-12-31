// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>

#include "ex00/Animal.hpp"
#include "ex00/Cat.hpp"
#include "ex00/Dog.hpp"

using std::cout;
using std::endl;

int main() {
  const Animal* a = new Animal();
  const Animal* c = new Cat();
  const Animal* d = new Dog();

  a->makeSound();
  c->makeSound();
  d->makeSound();
  cout << endl;

  cout << a->get_type() << endl;
	cout << c->get_type() << endl;
	cout << d->get_type() << endl;

  cout << endl;
  delete d;
  delete c;
  delete a;
}
