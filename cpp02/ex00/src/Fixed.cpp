/**
 * @file Fixed.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Fixed.hpp"

#include <iostream>

Fixed::Fixed(void) {
  setRawBits(0);
  std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& src) {
  std::cout << "Copy constructor called\n";
  *this = src;
}

Fixed::~Fixed(void) { std::cout << "Destructor called\n"; }

const Fixed& Fixed::operator=(const Fixed& src) {
  std::cout << "Assignation operator called\n";
  this->setRawBits(src.getRawBits());
  return src;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called\n";
  return _fixedPoint;
}

void Fixed::setRawBits(int const raw) { _fixedPoint = raw; }