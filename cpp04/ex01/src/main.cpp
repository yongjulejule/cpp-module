/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief make Animals
 * @version 0.1
 * @date 2022-02-24
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  int SIZE = 2;
  std::cout << "============ANIMAL ARRAY===============\n";
  Animal** animals = new Animal*[SIZE];
  for (int i = 0; i < SIZE; i++) {
    if (i & 1)
      animals[i] = new Cat();
    else
      animals[i] = new Dog();
  }
  for (int i = 0; i < SIZE; i++) {
    delete animals[i];
    std::cout << "==============\n";
  }
  delete[] animals;
  std::cout << "==========ANIMAL ARRAY END=================\n";
  const Animal* meta = new Animal();
  const Animal* dog = new Dog();
  const Animal* cat = new Cat();
  Cat cat1;
  Cat cat2(cat1);

  std::cout << meta->getType() << std::endl;
  std::cout << dog->getType() << std::endl;
  std::cout << cat->getType() << std::endl;

  meta->makeSound();
  dog->makeSound();
  cat->makeSound();

  delete meta;
  delete dog;
  delete cat;

  std::cout << "==========MAIN END=================\n";
  return EXIT_SUCCESS;
}