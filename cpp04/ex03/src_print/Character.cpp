/**
 * @file Character.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief  class Character derived from interface Icharacter implementation
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Character.hpp"

#include <iostream>

Character::Character(void) : _name("noName") {
  std::cout << "Character::Character(void)\n";
  this->_slot = new AMateria *[NUMBER_OF_SLOTS];
  for (int i = 0; i < NUMBER_OF_SLOTS; i++) {
    this->_slot[i] = NULL;
  }
}

Character::Character(std::string const &name) : _name(name) {
  std::cout << "Character::Character(std::string const &name) : " << name
            << "\n";
  this->_slot = new AMateria *[NUMBER_OF_SLOTS];
  for (int i = 0; i < NUMBER_OF_SLOTS; i++) {
    this->_slot[i] = NULL;
  }
}

Character::Character(Character const &src) {
  std::cout << "Character::Character(Character const &src)\n";
  if (this != &src) {
    *this = src;
  }
}

Character const &Character::operator=(Character const &src) {
  std::cout << "Character::operator=(Character const &src)\n";
  delete this->_slot;
  this->_slot = new AMateria *;
  for (int i = 0; i < NUMBER_OF_SLOTS; i++) {
    if (src._slot[i] == NULL) return *this;
    this->_slot[i] = src._slot[i];
  }
  return *this;
}

std::string const &Character::getName(void) const { return this->_name; }

void Character::equip(AMateria *materia) {
  std::cout << "Character::equip(AMateria *materia) type : "
            << materia->getType() << "\n";
  for (int i = 0; i < NUMBER_OF_SLOTS; i++) {
    if (this->_slot[i] == NULL) {
      this->_slot[i] = materia;
      return;
    }
  }
  std::cout << "Character::equip(AMateria *materia) : no empty slot\n";
}

void Character::unequip(int idx) {
  std::cout << "Character::unequip(int idx)\n";
  if (idx >= 0 && idx < NUMBER_OF_SLOTS) {
    this->_slot[idx] = NULL;
  }
}

void Character::use(int idx, ICharacter &target) {
  std::cout << "Character::use(int idx, ICharacter& target) idx, target : "
            << idx << ", " << target.getName() << "\n";
  if (idx >= 0 && idx < NUMBER_OF_SLOTS) {
    if (this->_slot[idx] != NULL) this->_slot[idx]->use(target);
  }
}

Character::~Character(void) {
  std::cout << "Character::~Character(void)\n";
  delete this->_slot;
}