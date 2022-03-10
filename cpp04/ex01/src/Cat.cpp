/**
 * @file Cat.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Cat class derived Animal implementation
 * @version 0.1
 * @date 2022-02-24
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Cat.hpp"

#include <iostream>

Cat::Cat(void) : Animal() {
  std::cout << "Cat constructor called\n";
  this->_type = "CAT";
  this->_brain = new Brain();
}

Cat::Cat(const Cat& src) : Animal(), _brain(NULL) { *this = src; }

Cat& Cat::operator=(const Cat& src) {
  std::cout << "Cat assign operator called\n";
  this->_type = src.getType();
  if (this->_brain != NULL) delete this->_brain;
  this->_brain = new Brain();
  for (int i = 0; i < 100; i++) {
    this->_brain->setIdea(i, src._brain->getIdea(i));
  }
  return *this;
}

void Cat::makeSound(void) const { std::cout << "meow~ meow~\n"; }

Brain* Cat::getBrain(void) const { return this->_brain; }

Cat::~Cat(void) {
  if (this->_brain != NULL) delete this->_brain;
  std::cout << "Cat destructor called\n";
}