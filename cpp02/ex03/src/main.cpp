/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

#include "Fixed.hpp"
#include "Point.hpp"

void printBSPResult(Point &a, Point &b, Point &c, Point &point, bool result) {
  if (result)
    std::cout << L_CYAN << point << " is in the triangle " << a << b << c
              << RESET << std::endl;
  else
    std::cout << L_RED << point << " is not in the triangle " << a << b << c
              << RESET << std::endl;
}

int main(void) {
  Point a(0, 10);
  Point b(10, 0);
  Point c(0, 0);
  Point point(4.99f, 4.99f);
  bool ret;
  ret = bsp(a, b, c, point);
  printBSPResult(a, b, c, point, ret);

  Fixed minX;
  Fixed minY;

  {
    Point minPoint(minX, ++minY);
    ret = bsp(a, b, c, minPoint);
    printBSPResult(a, b, c, minPoint, ret);
  }

  {
    Point minPoint(++minX, minY);
    ret = bsp(a, b, c, minPoint);
    printBSPResult(a, b, c, minPoint, ret);
  }

  Point point2(5, 5);
  ret = bsp(a, b, c, point2);
  printBSPResult(a, b, c, point2, ret);
  Point point3(0, 0);
  ret = bsp(a, c, b, point3);
  printBSPResult(a, c, b, point3, ret);

  Point d(0, 20);
  ret = bsp(a, c, d, point);
  printBSPResult(a, c, d, point3, ret);
  std::cout << "b, d = " << b << d << std::endl;
  d = b;
  std::cout << "b, d = " << b << d << std::endl;
  ret = bsp(a, c, d, point3);
  printBSPResult(a, c, d, point3, ret);

  Fixed x(4242);
  Fixed y(4242);
  Point ft(x, y);
  ret = bsp(a, b, ft, ft);
  printBSPResult(a, b, ft, ft, ret);
  Point ftft(x / 10, y / 10);
  ret = bsp(a, b, ft, ftft);
  printBSPResult(a, b, ft, ftft, ret);

  Fixed y2(-4242);
  Point ft2(x, y2);
  bsp(a, b, ft2, ftft);

  return 0;
}