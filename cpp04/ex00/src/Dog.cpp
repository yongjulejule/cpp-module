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
  std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog& src) : Animal() {
  std::cout << "Dog copy constructor called\n";
  this->_type = src.getType();
}

Dog& Dog::operator=(const Dog& src) {
  std::cout << "Dog assign operator called\n";
  this->_type = src.getType();
  return *this;
}

void Dog::makeSound(void) const { std::cout << "Bark! Bark!\n"; }

Dog::~Dog(void) { std::cout << "Dog destructor called\n"; }