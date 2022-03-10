/**
 * @file Dog.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Dog class derived Animal Implementation
 * @version 0.1
 * @date 2022-02-24
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Dog.hpp"

#include <iostream>

Dog::Dog(void) : Animal() {
  std::cout << "Dog constructor called\n";
  this->_type = "DOG";
  this->_brain = new Brain();
}

Dog::Dog(const Dog& src) : Animal(), _brain(NULL) {
  std::cout << "Dog copy constructor called\n";
  *this = src;
}

Dog& Dog::operator=(const Dog& src) {
  std::cout << "Dog assign operator called\n";
  this->_type = src.getType();
  if (this->_brain != NULL) delete this->_brain;
  this->_brain = new Brain();
  for (int i = 0; i < 100; i++) {
    this->_brain->setIdea(i, src._brain->getIdea(i));
  }
  return *this;
}

void Dog::makeSound(void) const { std::cout << "Bark! Bark!\n"; }

Brain* Dog::getBrain(void) const { return this->_brain; }

Dog::~Dog(void) {
  if (this->_brain != NULL) delete this->_brain;
  std::cout << "Dog destructor called\n";
}