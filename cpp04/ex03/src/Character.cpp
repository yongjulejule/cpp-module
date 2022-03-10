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

#include "AMateria.hpp"

Character::Character(void) : _name("noName") {
  this->_slot = new AMateria *[NUMBER_OF_SLOTS];
  for (int i = 0; i < NUMBER_OF_SLOTS; i++) {
    this->_slot[i] = NULL;
  }
}

Character::Character(std::string const &name) : _name(name) {
  this->_slot = new AMateria *[NUMBER_OF_SLOTS];
  for (int i = 0; i < NUMBER_OF_SLOTS; i++) {
    this->_slot[i] = NULL;
  }
}

Character::Character(Character const &src) : _name(src._name), _slot(NULL) {
  *this = src;
}

Character const &Character::operator=(Character const &src) {
  if (this->_slot != NULL) {
    delete[] this->_slot;
  }
  this->_slot = new AMateria *[NUMBER_OF_SLOTS];
  for (int i = 0; i < NUMBER_OF_SLOTS; i++) {
    this->_slot[i] = src._slot[i];
  }
  return *this;
}

std::string const &Character::getName(void) const { return this->_name; }

void Character::equip(AMateria *materia) {
  for (int i = 0; i < NUMBER_OF_SLOTS; i++) {
    if (this->_slot[i] == NULL) {
      this->_slot[i] = materia;
      return;
    }
  }
}

void Character::unequip(int idx) {
  if (idx >= 0 && idx < NUMBER_OF_SLOTS) {
    this->_slot[idx] = NULL;
  }
}

void Character::use(int idx, ICharacter &target) {
  if (idx >= 0 && idx < NUMBER_OF_SLOTS) {
    if (this->_slot[idx] != NULL) this->_slot[idx]->use(target);
  }
}

Character::~Character(void) {
  if (this->_slot != NULL) delete[] this->_slot;
}