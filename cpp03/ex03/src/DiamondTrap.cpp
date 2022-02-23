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

DiamondTrap::DiamondTrap(void) {}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) {}

DiamondTrap::DiamondTrap(const DiamondTrap& src) { *this = src; }

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src) {
  this->_name = src._name;
  this->_hitPoints = src._hitPoints;
  this->_maxHitPoints = src._maxHitPoints;
  this->_energyPoints = src._energyPoints;
  this->_maxEnergyPoints = src._maxEnergyPoints;
  return *this;
}

DiamondTrap::~DiamondTrap(void) {}
