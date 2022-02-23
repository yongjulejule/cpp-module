/**
 * @file ClapTrap.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief ClapTrap class Implementation
 * @version 0.1
 * @date 2022-02-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(void)
    : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "class ClapTrap : initialized without name\n";
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(10) {
  std::cout << "class ClapTrap : initialized with name : " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
  std::cout << "class ClapTrap : copy constructor called\n";
  *this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
  std::cout << "class ClapTrap : assign operator called\n";
  this->_name = src._name;
  this->_hitPoints = src._hitPoints;
  this->_energyPoints = src._energyPoints;
  this->_attackDamage = src._attackDamage;
  return *this;
}

void ClapTrap::attack(std::string const& target) {
  std::cout << "ClapTrap <" << this->_name << "> attack <" << target
            << ">, causing <" << this->_attackDamage << "> points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (this->_hitPoints <= amount) {
    this->_hitPoints = 0;
    std::cout << "ClapTrap <" << this->_name << "> take damage <" << amount
              << ">, So It's COMPLETELY destroyed!☠️\n";
    return;
  }
  this->_hitPoints -= amount;
  std::cout << "ClapTrap <" << this->_name << "> take damage <" << amount
            << ">, Now has <" << this->_hitPoints << "> points of HP!\n";
}

void ClapTrap::beRepared(unsigned int amount) {
  if (this->_hitPoints == 0) {
    std::cout << "Repare? Nice try but ClapTrap <" << this->_name
              << "> already DEAD ⚰️ HAHA\n";
    return;
  }
  this->_hitPoints += amount;
  std::cout << "ClapTrap <" << this->_name << "> be repared <" << amount
            << ">, Now has <" << this->_hitPoints << "> points of HP!\n";
}

std::string ClapTrap::getName(void) const { return this->_name; }

unsigned int ClapTrap::getHitPoint(void) const { return this->_hitPoints; }

unsigned int ClapTrap::getEnergyPoint(void) const {
  return this->_energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const {
  return this->_attackDamage;
}

ClapTrap::~ClapTrap(void) {
  std::cout << "class ClapTrap : destructor called\n";
}