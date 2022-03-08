/**
 * @file Point.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Point class implementation
 * @version 0.1
 * @date 2022-02-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Point.hpp"

#include <iostream>

Point::Point(void) : _x(0), _y(0){};

Point::Point(const Fixed& x, const Fixed& y) : _x(x), _y(y) {}

Point::Point(int x, int y) : _x(x), _y(y) {}

Point::Point(float x, float y) : _x(x), _y(y) {}

Point::Point(const Point& src) { *this = src; }

Point& Point::operator=(const Point& rhs) {
  if (this == &rhs) return *this;
  const_cast<Fixed&>(this->_x) = rhs.getX();
  const_cast<Fixed&>(this->_y) = rhs.getY();
  return *this;
}

Point Point::operator-(const Point& rhs) const {
  Point tmp(this->getX() - rhs.getX(), this->getY() - rhs.getY());
  return tmp;
}

bool Point::operator==(const Point& rhs) const {
  return (this->getX() == rhs.getX() && this->getY() == rhs.getY());
}

const Fixed& Point::getX(void) const { return _x; }

const Fixed& Point::getY(void) const { return _y; }

Fixed Point::crossProduct(const Point& x, const Point& y) {
  return ((x.getX().toFloat()) * y.getY().toFloat()) -
         ((x.getY().toFloat()) * y.getX().toFloat());
}

Point::~Point(void) {}

std::ostream& operator<<(std::ostream& out, const Point& src) {
  return out << "(" << src.getX() << ", " << src.getY() << ")";
}
