/**
 * @file HumanB.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief HumanB class implementation
 * @version 0.1
 * @date 2022-02-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

void HumanB::attack(void) const {
  if (this->_weapon.getType() == "") {
    std::cout << this->_name << " attacks with hands" << std::endl;
  } else {
    std::cout << this->_name << " accacks with his " << this->_weapon.getType()
              << std::endl;
  }
}

void HumanB::setWeapon(Weapon& weapon) { this->_weapon = weapon; }

HumanB::~HumanB(void) {
  std::cout << this->_name << " gonna die haha " << std::endl;
}
