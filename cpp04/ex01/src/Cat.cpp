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
  this->_type = "CAT";
  this->_brain = new Brain();
  std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat& src) : _brain(NULL) { *this = src; }

Cat& Cat::operator=(const Cat& src) {
  std::cout << "assign operator called in cat\n";
  this->_type = src.getType();
  if (this->_brain != NULL) delete this->_brain;
  delete this->_brain;
  this->_brain = new Brain();
  return *this;
}

void Cat::makeSound(void) const { std::cout << "meow~ meow~\n"; }

Cat::~Cat(void) {
  if (this->_brain != NULL) delete this->_brain;
  std::cout << "Cat destructor called\n";
}