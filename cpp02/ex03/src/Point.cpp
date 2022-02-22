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

Point::Point(Fixed& x, Fixed& y) : _x(x), _y(y) {}

Point::Point(int x, int y) : _x(x), _y(y) {}

Point::Point(float x, float y) : _x(x), _y(y) {}

Point& Point::operator=(const Point& src) {
  if (this == &src) return *this;
  const_cast<Fixed&>(this->_x) = src.getX();
  const_cast<Fixed&>(this->_y) = src.getY();
  return *this;
}

Point Point::operator-(const Point& src) {
  Point tmp;
  tmp.setX(const_cast<Fixed&>(this->getX()) - src.getX());
  tmp.setY(const_cast<Fixed&>(this->getY()) - src.getY());
  return tmp;
}

Point::Point(const Point& src) { *this = src; }

Point::~Point(void) {}

const Fixed& Point::getX(void) const { return _x; }
const Fixed& Point::getY(void) const { return _y; }
void Point::setX(const Fixed& x) { const_cast<Fixed&>(this->_x) = x; }
void Point::setY(const Fixed& y) { const_cast<Fixed&>(this->_y) = y; }

std::ostream& operator<<(std::ostream& out, Point& src) {
  return out << "(" << src.getX() << ", " << src.getY() << ")";
}

Fixed Point::crossProduct(const Point& x, const Point& y) {
  return (const_cast<Fixed&>(x.getX()) * y.getY()) -
         (const_cast<Fixed&>(x.getY()) * y.getX());
}