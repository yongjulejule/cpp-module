/**
 * @file Fixed.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Fixed class implementation
 * @version 0.1
 * @date 2022-02-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Fixed.hpp"

#include <cmath>
#include <iostream>

Fixed::Fixed(void) : _fixedPoint(0) {
  std::cout << "Default constructor called\n";
}

Fixed::Fixed(int num) : _fixedPoint(num << _fracBits) {
  std::cout << "Int constructor called\n";
}

Fixed::Fixed(float num) : _fixedPoint(roundf(num * (1 << _fracBits))) {
  std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& src) {
  std::cout << "Copy constructor called\n";
  *this = src;
}

Fixed& Fixed::operator=(const Fixed& src) {
  std::cout << "Assignation operator called\n";
  this->setRawBits(src.getRawBits());
  return *this;
}

int Fixed::getRawBits(void) const { return _fixedPoint; }

void Fixed::setRawBits(int const raw) { _fixedPoint = raw; }

int Fixed::toInt(void) const { return getRawBits() >> _fracBits; }

float Fixed::toFloat(void) const {
  return static_cast<float>(getRawBits()) / (1 << _fracBits);
}

Fixed::~Fixed(void) { std::cout << "Destructor called\n"; }

std::ostream& operator<<(std::ostream& out, const Fixed& src) {
  return out << (src.toFloat());
}