/**
 * @file HumanB.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief implementation of  HumanB
 * @version 0.1
 * @date 2022-02-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) { }

void HumanB::attack(void) const {
	std::cout << _name << " accacks with his " << _weapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	_weapon = weapon;
}

HumanB::~HumanB(void) {
	std::cout << _name << " gonna die haha " << std::endl;
}
