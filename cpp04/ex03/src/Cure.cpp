/**
 * @file Cure.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief class Cure derieved from abstract Materia implementation
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Cure.hpp"

#include <iostream>

#include "ICharacter.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(Cure const &src) : AMateria("cure") {
  if (this != &src) {
    *this = src;
  }
}

Cure const &Cure::operator=(Cure const &src) { return src; }

AMateria *Cure::clone(void) const { return new Cure(*this); }

void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure::~Cure(void) {}