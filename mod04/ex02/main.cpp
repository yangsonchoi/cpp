// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>

#include "ex02/Animal.hpp"
#include "ex02/Cat.hpp"
#include "ex02/Dog.hpp"
#include "ex02/Brain.hpp"

using std::cout;
using std::endl;

// void  CheckLeak() {
//   system("leaks Brain");
// }

int main() {
  // atexit(CheckLeak);

  // const Animal* TempAnimal = new Animal();
  // const Dog* i = new Dog();
  // const Animal* j = new Cat();
  // const Dog* k;

  // k = new Dog(*i);

  // cout << endl;
  // i->makeSound();
  // j->makeSound();
  // k->makeSound();
  // cout << endl;

  // cout << i->get_type() << endl;
  // cout << j->get_type() << endl;
  // cout << k->get_type() << endl;

  // cout << endl;
  // i->PrintBrain();

  // cout << endl;
  // delete i;
  // delete j;
  // delete k;
  // cout << endl;

  Animal* meta[20];
  Dog*  Burger;

  for (int i = 0 ; i < 20 ; ++i) {
    if (i % 2 == 0) {
      meta[i] = new Cat();
    } else {
      meta[i] = new Dog();
    }
  }
  Burger = new Dog((*dynamic_cast<Dog*>(meta[1])));
  meta[1]->InputIdea(1, "HEY I JUST MET YOU");
  meta[1]->PrintBrain();
  for (int i = 0 ; i < I_SIZE / 5 ; ++i)
    delete meta[i];
  Burger->PrintBrain();
  delete Burger;
}
