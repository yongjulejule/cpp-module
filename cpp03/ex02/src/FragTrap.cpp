/**
 * @file FragTrap.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief FragTrap class Implementation
 * @version 0.1
 * @date 2022-02-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(void) : ClapTrap() {
  std::cout << "class FragTrap : initialized without name\n";
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
  this->_maxHitPoints = 100;
  this->_maxEnergyPoints = 100;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  std::cout << "class FragTrap : initialized with name : " << name << std::endl;
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
  this->_maxHitPoints = 100;
  this->_maxEnergyPoints = 100;
}

FragTrap::FragTrap(const FragTrap& src) {
  std::cout << "class FragTrap : copy constructor called\n";
  *this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
  std::cout << "class FragTrap : assign operator called\n";
  this->_name = src._name;
  this->_hitPoints = src._hitPoints;
  this->_energyPoints = src._energyPoints;
  this->_attackDamage = src._attackDamage;
  this->_maxHitPoints = src._maxHitPoints;
  this->_maxEnergyPoints = src._maxEnergyPoints;
  return *this;
}

void FragTrap::highFivesGuys(void) {
  std::cout << BLUE << "FragTrap <" << this->_name << "> cast highFivesGuys!\n";
  if (this->_energyPoints < 10) {
    std::cout << YELLOW << "FragTrap <" << this->_name
              << "> has no enough energy!\n"
              << RESET;
    return;
  }
  this->_energyPoints -= 10;
  std::cout << "It consumes <" << 10 << "> points of energy!\n" << RESET;
  this->beRepaird(this->_maxHitPoints * 0.03);
}

FragTrap::~FragTrap(void) {
  std::cout << "class FragTrap : " << this->_name << " is destructed"
            << std::endl;
}