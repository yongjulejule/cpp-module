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
  std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat& src) { *this = src; }

Cat& Cat::operator=(const Cat& src) {
  this->_type = src.getType();
  return *this;
}

void Cat::makeSound(void) const { std::cout << "meow~ meow~\n"; }

Cat::~Cat(void) { std::cout << "Cat destructor called\n"; }