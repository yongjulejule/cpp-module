/**
 * @file Weapon.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Weapon class implementation
 * @version 0.1
 * @date 2022-02-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Weapon.hpp"

Weapon::Weapon(void) : _type("") {}

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon(void) {
  std::cout << this->_type << " is destroyed." << std::endl;
}

std::string Weapon::getType(void) const { return this->_type; }

void Weapon::setType(std::string type) { this->_type = type; }

Weapon& Weapon::operator=(const Weapon& src) {
  this->_type = src._type;
  return *this;
}
