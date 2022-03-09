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
  this->_type = "DOG";
  this->_brain = new Brain();
  std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog& src) : _brain(NULL) { *this = src; }

Dog& Dog::operator=(const Dog& src) {
  std::cout << "assign operator called in dog\n";
  this->_type = src.getType();
  if (this->_brain != NULL) delete this->_brain;
  this->_brain = new Brain();
  return *this;
}

void Dog::makeSound(void) const { std::cout << "Bark! Bark!\n"; }

void Dog::printBrain(void) { std::string* ideas = this->_brain.getIdeas(); }

Dog::~Dog(void) {
  delete this->_brain;
  std::cout << "Dog destructor called\n";
}