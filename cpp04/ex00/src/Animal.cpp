/**
 * @file Animal.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Animal class implementation
 * @version 0.1
 * @date 2022-02-24
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Animal.hpp"

#include <iostream>

Animal::Animal(void) : _type("Just Animal") {
  std::cout << "Animal default Constructor Called\n";
}

Animal::Animal(const Animal& src) { *this = src; }

Animal& Animal::operator=(const Animal& src) {
  this->_type = src._type;
  return *this;
}

std::string Animal::getType(void) const { return this->_type; }

void Animal::makeSound(void) const { std::cout << "Hi I'm Animal.\n"; }

Animal::~Animal(void) {
  std::cout << "Animal " << this->_type << " Destructor Called\n";
}
