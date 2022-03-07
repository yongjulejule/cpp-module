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

#define L_CYAN "\033[1;96m"
#define L_RED "\033[1;31m"
#define L_YELLOW "\033[1;33m"
#define RESET "\033[0m"

#include "Fixed.hpp"

class Point {
 private:
  Fixed const _x;
  Fixed const _y;

 public:
  Point(void);
  Point(int x, int y);
  Point(float x, float y);
  Point(const Point& rhs);
  Point(const Fixed& x, const Fixed& y);

  const Fixed& getX(void) const;
  const Fixed& getY(void) const;

  Point& operator=(const Point& rhs);
  Point operator-(const Point& rhs) const;
  bool operator==(const Point& rhs) const;

  static Fixed crossProduct(const Point& x, const Point& y);
  ~Point(void);
};

std::ostream& operator<<(std::ostream& out, const Point& rhs);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif  // POINT_HPP