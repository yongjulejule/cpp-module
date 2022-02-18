/**
 * @file Weapon.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Weapon.hpp"

Weapon::Weapon(void) { }

Weapon::Weapon(std::string type) : _type(type) { }

Weapon::~Weapon(void) {
	std::cout << _type << " is destroyed." << std::endl;
}

std::string Weapon::getType(void) const {
	return _type;
}

void Weapon::setType(std::string type) {
	_type = type;
}

Weapon& Weapon::operator=(const Weapon& src) {
	_type = src._type;
	return *this;
}
