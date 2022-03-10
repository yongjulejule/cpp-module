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

Ice::Ice(void) : AMateria("ice") { std::cout << "Ice::Ice(void)\n"; }

Ice::Ice(Ice const &src) : AMateria("ice") {
  std::cout << "Ice::Ice(Ice const &src)\n";
  if (this != &src) {
    *this = src;
  }
}

Ice const &Ice::operator=(Ice const &src) {
  std::cout << "Ice::operator=(Ice const &src)\n";
  return src;
}

AMateria *Ice::clone(void) const {
  std::cout << "Ice::clone(void) const\n";
  return new Ice(*this);
}

void Ice::use(ICharacter &target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice(void) { std::cout << "Ice::~Ice(void)\n"; }