/**
 * @file AMateria.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Abstract Materia class implementation
 * @version 0.1
 * @date 2022-02-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "AMateria.hpp"

#include <iostream>

#include "ICharacter.hpp"

AMateria::AMateria(void) : _type("") {}

AMateria::AMateria(std::string const& type) : _type(type) {}

AMateria::AMateria(AMateria const& src) : _type(src._type) {}

AMateria& AMateria::operator=(AMateria const& src) {
  this->_type = src._type;
  return *this;
}

std::string const& AMateria::getType(void) const { return this->_type; }

void AMateria::use(ICharacter& target) {
  std::cout << "* Just Cheering for " << target.getName() << " *\n";
}

AMateria::~AMateria(void) {}