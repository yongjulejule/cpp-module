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

AMateria::AMateria(std::string const& type) : _type(type) {
  std::cout << "Abstract Materia class constructor called with type : " << type
            << std::endl;
}

std::string const& AMateria::getType(void) const { return this->_type; }

void AMateria::use(ICharacter& target) {}

AMateria::~AMateria(void) {
  std::cout << "Abstract Materia class destructor called which type is "
            << this->_type << std::endl;
}