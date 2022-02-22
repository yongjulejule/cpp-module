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

#include <cmath>
#include <iostream>

Fixed::Fixed(void) {
  std::cout << "Default constructor called\n";
  setRawBits(0);
}

Fixed::Fixed(int num) {
  std::cout << "Int constructor called\n";
  setRawBits(num << _fracBits);
}

Fixed::Fixed(float num) {
  std::cout << "Float constructor called\n";
  setRawBits(roundf((num * (1 << _fracBits))));
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

std::ostream& operator<<(std::ostream& out, const Fixed& src) {
  return out << (src.toFloat());
}

int Fixed::getRawBits(void) const { return _fixedPoint; }

void Fixed::setRawBits(int const raw) { _fixedPoint = raw; }

int Fixed::toInt(void) const { return getRawBits() >> _fracBits; }

float Fixed::toFloat(void) const {
  return static_cast<float>(getRawBits()) / (1 << _fracBits);
}