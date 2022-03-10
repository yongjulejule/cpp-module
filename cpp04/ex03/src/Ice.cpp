/**
 * @file Ice.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Ice.hpp"

#include <iostream>

#include "ICharacter.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const &src) : AMateria("ice") {
  if (this != &src) {
    *this = src;
  }
}

Ice const &Ice::operator=(Ice const &src) { return src; }

AMateria *Ice::clone(void) const { return new Ice(*this); }

void Ice::use(ICharacter &target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice(void) {}