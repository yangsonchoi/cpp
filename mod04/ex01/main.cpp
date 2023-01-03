// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>

#include "ex01/Animal.hpp"
#include "ex01/Cat.hpp"
#include "ex01/Dog.hpp"
#include "ex01/Brain.hpp"

using std::cout;
using std::endl;

// void  CheckLeak() {
//   system("leaks Brain");
// }

int main() {
  // atexit(CheckLeak);

  const Animal* meta = new Animal();
  const Dog* i = new Dog();
  const Animal* j = new Cat();
  const Dog* k;

  k = new Dog(*i);

  cout << endl;
  meta->makeSound();
  i->makeSound();
  j->makeSound();
  k->makeSound();
  cout << endl;

  cout << meta->get_type() << endl;
  cout << i->get_type() << endl;
  cout << j->get_type() << endl;
  cout << k->get_type() << endl;

  i->PrintBrain(); // to set brain, cant access set_idea from main, needs set_brain to set_idea

  cout << endl;
  delete meta;
  delete i;
  delete j;
  delete k;
  cout << endl;
}
