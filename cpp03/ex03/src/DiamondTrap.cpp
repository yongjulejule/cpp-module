/**
 * @file DiamondTrap.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief DiamondTrap class implementation
 * @version 0.1
 * @date 2022-02-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap() {
  std::cout << "class DiamondTrap : initialized without name\n";
  this->_hitPoints = 100;
  this->_maxHitPoints = 100;
  this->_energyPoints = 50;
  this->_maxEnergyPoints = 50;
  this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap() {
  std::cout << "class DiamondTrap : initialized with name : " << name
            << std::endl;
  this->_name = name;
  this->_hitPoints = 100;
  this->_maxHitPoints = 100;
  this->_energyPoints = 50;
  this->_maxEnergyPoints = 50;
  this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) { *this = src; }

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src) {
  this->_name = src._name;
  this->_hitPoints = src._hitPoints;
  this->_maxHitPoints = src._maxHitPoints;
  this->_energyPoints = src._energyPoints;
  this->_maxEnergyPoints = src._maxEnergyPoints;
  return *this;
}

void DiamondTrap::whoAmI(void) {
  std::cout << L_MAGENTA << "I am a diamond trap named " << this->_name
            << " and a clap trap named " << ClapTrap::_name << RESET
            << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
  std::cout << "class DiamondTrap : " << this->_name << " is destructed"
            << std::endl;
}
