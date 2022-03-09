/**
 * @file ScavTrap.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief ScavTrap class Implementation
 * @version 0.1
 * @date 2022-02-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap() {
  std::cout << "class ScavTrap : initialized without name\n";
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
  this->_maxHitPoints = 100;
  this->_maxEnergyPoints = 50;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  std::cout << "class ScavTrap : initialized with name : " << name << std::endl;
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
  this->_maxHitPoints = 100;
  this->_maxEnergyPoints = 50;
}

ScavTrap::ScavTrap(const ScavTrap& src) {
  std::cout << "class ScavTrap : copy constructor called\n";
  *this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
  std::cout << "class ScavTrap : assign operator called\n";
  this->_name = src._name;
  this->_hitPoints = src._hitPoints;
  this->_energyPoints = src._energyPoints;
  this->_attackDamage = src._attackDamage;
  this->_maxHitPoints = src._maxHitPoints;
  this->_maxEnergyPoints = src._maxEnergyPoints;
  return *this;
}

void ScavTrap::guardGate(void) {
  if (this->_hitPoints == 0) {
    std::cout << YELLOW "ScavTrap <" << this->_name
              << "> is already DEAD!☠️\n" RESET;
    return;
  }
  std::cout << L_MAGENTA "!! ANNOUNCE !! ScavTrap <" << this->_name
            << "> guard gate!\n" RESET;
}

void ScavTrap::attack(std::string const& target) {
  std::cout << L_RED << "ScavTrap <" << this->_name << "> attack <" << target
            << ">, causing <" << this->_attackDamage << "> points of damage!\n"
            << RESET;
}

ScavTrap::~ScavTrap(void) {
  std::cout << "class ScavTrap : " << this->_name << " is destructed\n";
}