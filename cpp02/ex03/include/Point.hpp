/**
 * @file Point.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief point Class define
 * @version 0.1
 * @date 2022-02-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point : Fixed {
 private:
  const Fixed _x;
  const Fixed _y;

 public:
  Point(void);
  Point(Fixed& x, Fixed& y);
  Point(int x, int y);
  Point(float x, float y);
  Point(const Point& src);

  const Fixed& getX(void) const;
  const Fixed& getY(void) const;
  void setX(const Fixed& x);
  void setY(const Fixed& y);

  Point& operator=(const Point& src);
  Point operator-(const Point& src);

  static Fixed crossProduct(const Point& x, const Point& y);
  ~Point(void);
};

std::ostream& operator<<(std::ostream& out, Point& src);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif  // POINT_HPP