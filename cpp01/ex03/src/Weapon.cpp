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

Weapon::Weapon(void) : _type("") {
  std::cout << "Weapon constructed without type.\n";
}

Weapon::Weapon(std::string type) : _type(type) {
  std::cout << "Weapon constructed with type [" << _type << "]\n";
}

Weapon::~Weapon(void) {
  std::cout << "[" << this->_type << "] is destroyed.\n";
}

std::string Weapon::getType(void) const { return this->_type; }

void Weapon::setType(std::string type) { this->_type = type; }
