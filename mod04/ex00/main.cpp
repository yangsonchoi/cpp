// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>

#include "ex00/Animal.hpp"
#include "ex00/Cat.hpp"
#include "ex00/Dog.hpp"
#include "ex00/WrongAnimal.hpp"
#include "ex00/WrongCat.hpp"

using std::cout;
using std::endl;

int main() {
  const Animal* meta = new Animal();
  const Animal* i = new Dog();
  const Animal* j = new Cat();

  cout << endl;
  meta->makeSound();
  i->makeSound();
  j->makeSound();
  cout << endl;

  cout << meta->get_type() << endl;
  cout << i->get_type() << endl;
  cout << j->get_type() << endl;

  cout << endl;
  delete meta;
  delete i;
  delete j;
  cout << endl;

  const WrongAnimal* wmeta = new WrongAnimal();
  const WrongAnimal* k = new WrongCat();
  const WrongCat* l = new WrongCat();

  cout << endl;
  wmeta->makeSound();
  k->makeSound();
  l->makeSound();
  cout << endl;

  cout << wmeta->get_type() << endl;
  cout << k->get_type() << endl;
  cout << l->get_type() << endl;

  cout << endl;
  delete wmeta;
  delete k;
  delete l;
}
