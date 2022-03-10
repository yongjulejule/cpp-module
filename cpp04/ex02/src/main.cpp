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

void deepCopyTest(void) {
  std::cout << "==========Here is Test for Brain Deep copy============\n";
  {
    Dog* DogOrigin = new Dog();
    Brain* DogOriginBrain = DogOrigin->getBrain();
    DogOriginBrain->setIdea(0, "I am a dog!!!!!!!!!!!!");
    Dog* DogCopy = new Dog(*DogOrigin);
    for (int i = 0; i < 10; i++) {
      std::cout << "======== Origin Brain ========\n";
      std::cout << DogOrigin->getBrain()->getIdea(i) << std::endl;
      std::cout << "======== Copied Brain ========\n";
      std::cout << DogCopy->getBrain()->getIdea(i) << std::endl;
    }
    delete DogOrigin;
    delete DogCopy;
  }
  {
    Cat* CatOrigin = new Cat();
    Brain* CatOriginBrain = CatOrigin->getBrain();
    CatOriginBrain->setIdea(0, "I am a Cat!!!!!!!!!!!!");
    Cat* CatCopy = new Cat(*CatOrigin);
    for (int i = 0; i < 10; i++) {
      std::cout << "======== Origin Brain ========\n";
      std::cout << CatOrigin->getBrain()->getIdea(i) << std::endl;
      std::cout << "======== Copied Brain ========\n";
      std::cout << CatCopy->getBrain()->getIdea(i) << std::endl;
    }
    delete CatOrigin;
    delete CatCopy;
  }
  std::cout << "=============Deep copy Test End==============\n";
}

int main(void) {
  int SIZE = 4;
  std::cout << "============ANIMAL ARRAY===============\n";
  Animal** animals = new Animal*[SIZE];
  for (int i = 0; i < SIZE; i++) {
    if (i & 1)
      animals[i] = new Cat();
    else
      animals[i] = new Dog();
  }

  std::cout << "============Delete Each Animals===============\n";
  for (int i = 0; i < SIZE; i++) {
    delete animals[i];
    animals[i] = NULL;
  }
  delete[] animals;
  deepCopyTest();
  std::cout << "==========ANIMAL ARRAY END=================\n";
  // const Animal* meta = new Animal();
  const Animal* dog = new Dog();
  const Animal* cat = new Cat();

  // std::cout << meta->getType() << std::endl;
  std::cout << dog->getType() << std::endl;
  std::cout << cat->getType() << std::endl;

  // meta->makeSound();
  dog->makeSound();
  cat->makeSound();

  // delete meta;
  delete dog;
  delete cat;

  std::cout << "==========CAT COPY==========\n";
  Cat cat1;
  Cat cat2(cat1);
  std::cout << "==========MAIN END=================\n";
  return EXIT_SUCCESS;
}