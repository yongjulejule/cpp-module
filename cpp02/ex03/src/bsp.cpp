/**
 * @file bsp.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Point.hpp"

bool isTriangle(Point const &a, Point const &b, Point const &c) {
  if (a == b || a == c || b == c) return false;
  Fixed x[3] = {a.getX(), b.getX(), c.getX()};
  Fixed y[3] = {a.getY(), b.getY(), c.getY()};
  if (x[0] == x[1] || x[0] == x[2]) {
    return true;
  }
  Fixed slope[2] = {(y[2] - y[0]) / (x[2] - x[0]),
                    (y[1] - y[0]) / (x[1] - x[0])};
  return slope[0] != slope[1];
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  if (!isTriangle(a, b, c)) {
    std::cout << L_YELLOW << a << " " << b << " " << c
              << " cannot generate triangle\n" RESET;
    return false;
  }
  Point v[3] = {b - a, c - b, a - c};
  Point p[3] = {point - a, point - b, point - c};

  return (Point::crossProduct(v[0], p[0]) > 0 &&
          Point::crossProduct(v[1], p[1]) > 0 &&
          Point::crossProduct(v[2], p[2]) > 0) ||
         (Point::crossProduct(v[0], p[0]) < 0 &&
          Point::crossProduct(v[1], p[1]) < 0 &&
          Point::crossProduct(v[2], p[2]) < 0);
}