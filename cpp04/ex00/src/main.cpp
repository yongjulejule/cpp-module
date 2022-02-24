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
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  const Animal* meta = new Animal();
  const Animal* dog = new Dog();
  const Animal* cat = new Cat();

  std::cout << meta->getType() << std::endl;
  std::cout << dog->getType() << std::endl;
  std::cout << cat->getType() << std::endl;
  meta->makeSound();
  dog->makeSound();
  cat->makeSound();

  delete meta;
  delete dog;
  delete cat;
  return EXIT_SUCCESS;
}