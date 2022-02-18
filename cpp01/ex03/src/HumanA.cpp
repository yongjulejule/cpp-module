/**
 * @file HumanA.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief implementation of HumanA
 * @version 0.1
 * @date 2022-02-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) { }

void HumanA::attack(void) const {
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

HumanA::~HumanA(void) {
	std::cout << _name << " gonna die haha " << std::endl;
}