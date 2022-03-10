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

Cure::Cure(void) : AMateria("cure") { std::cout << "Cure::Cure(void)\n"; }

Cure::Cure(Cure const &src) : AMateria("cure") {
  std::cout << "Cure::Cure(Cure const &src)\n";
  if (this != &src) {
    *this = src;
  }
}

Cure const &Cure::operator=(Cure const &src) {
  std::cout << "Cure::operator=(Cure const &src)\n";
  return src;
}

AMateria *Cure::clone(void) const {
  std::cout << "Cure::clone(void) const\n";
  return new Cure(*this);
}

void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure::~Cure(void) { std::cout << "Cure::~Cure(void)\n"; }