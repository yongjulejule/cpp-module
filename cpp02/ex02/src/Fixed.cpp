/**
 * @file Fixed.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Fiexed class implementation
 * @version 0.1
 * @date 2022-02-21
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Fixed.hpp"

#include <cmath>
#include <iostream>

Fixed::Fixed(void) : _fixedPoint(0) {}

Fixed::Fixed(int num) : _fixedPoint(num << _fracBits) {}

Fixed::Fixed(float num) : _fixedPoint(roundf(num * (1 << _fracBits))) {}

Fixed::Fixed(const Fixed& src) { *this = src; }

Fixed& Fixed::operator=(const Fixed& rhs) {
  this->setRawBits(rhs.getRawBits());
  return *this;
}

Fixed Fixed::operator+(const Fixed& rhs) const {
  Fixed temp;
  temp.setRawBits(this->getRawBits() + rhs.getRawBits());
  return temp;
}

Fixed Fixed::operator-(const Fixed& rhs) const {
  Fixed temp;
  temp.setRawBits(this->getRawBits() - rhs.getRawBits());
  return temp;
}

Fixed Fixed::operator*(const Fixed& rhs) const {
  Fixed temp;
  temp.setRawBits(this->getRawBits() * rhs.getRawBits() / (1 << _fracBits));
  return temp;
}

Fixed Fixed::operator/(const Fixed& rhs) const {
  Fixed temp;
  temp.setRawBits((1 << _fracBits) * this->getRawBits() / rhs.getRawBits());
  return temp;
}

bool Fixed::operator==(const Fixed& rhs) const {
  return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator>(const Fixed& rhs) const {
  return this->getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed& rhs) const {
  return this->getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed& rhs) const {
  return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed& rhs) const {
  return this->getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed& rhs) const {
  return this->getRawBits() != rhs.getRawBits();
}

Fixed& Fixed::operator++(void) {
  this->_fixedPoint = this->_fixedPoint + 1;
  return *this;
}

Fixed& Fixed::operator--(void) {
  this->_fixedPoint = this->_fixedPoint - 1;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed temp = *this;
  this->_fixedPoint = this->_fixedPoint + 1;
  return temp;
}

Fixed Fixed::operator--(int) {
  Fixed temp = *this;
  this->_fixedPoint = this->_fixedPoint - 1;
  return temp;
}

int Fixed::getRawBits(void) const { return this->_fixedPoint; }

void Fixed::setRawBits(int const raw) { this->_fixedPoint = raw; }

int Fixed::toInt(void) const { return getRawBits() >> _fracBits; }

float Fixed::toFloat(void) const {
  return static_cast<float>(getRawBits()) / (1 << _fracBits);
}

Fixed& Fixed::min(Fixed& v1, Fixed& v2) { return (v1 < v2) ? v1 : v2; }

Fixed& Fixed::max(Fixed& v1, Fixed& v2) { return (v1 > v2) ? v1 : v2; }

const Fixed& Fixed::min(const Fixed& v1, const Fixed& v2) {
  return (v1.toFloat() < v2.toFloat()) ? v1 : v2;
}

const Fixed& Fixed::max(const Fixed& v1, const Fixed& v2) {
  return (v1.toFloat() > v2.toFloat()) ? v1 : v2;
}

Fixed::~Fixed(void) {}

std::ostream& operator<<(std::ostream& out, const Fixed& rhs) {
  return out << (rhs.toFloat());
}