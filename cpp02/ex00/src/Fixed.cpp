/**
 * @file Fixed.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief class Fixed implementation
 * @version 0.1
 * @date 2022-02-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Fixed.hpp"

#include <iostream>

Fixed::Fixed(void) : _fixedPoint(0) {
  std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& src) {
  std::cout << "Copy constructor called\n";
  *this = src;
}

Fixed::~Fixed(void) { std::cout << "Destructor called\n"; }

Fixed& Fixed::operator=(const Fixed& src) {
  std::cout << "Assignation operator called\n";
  this->setRawBits(src.getRawBits());
  return *this;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called\n";
  return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw) { this->_fixedPoint = raw; }