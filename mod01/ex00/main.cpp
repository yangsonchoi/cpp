// Copyright 2022 Yangson Choi. All rights reserved.

#include <iostream>

#include "ex00/Zombie.hpp"

using std::cout;
using std::endl;

int main() {
  cout << "---------constructor---------" << endl;
  Zombie cone("Conehead");
  Zombie bucket("Buckethead");
  cout << "----------announce-----------" << endl;
  cone.announce();
  bucket.announce();
  cout << "------------new--------------" << endl;
  Zombie* pFootball = newZombie("Football");
  Zombie* pScreenDoor = newZombie("Screen Door");
  cout << "----------announce-----------" << endl;
  pFootball->announce();
  pScreenDoor->announce();
  cout << "---------randomChump---------" << endl;
  randomChump("Ducky Tube");
  randomChump("Zomboni");
  cout << "------------delete-----------" << endl;
  delete pFootball;
  delete pScreenDoor;
  cout << "------------return-----------" << endl;
  return 0;
}
