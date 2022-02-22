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
    std::cout << point << " is in the triangle " << a << b << c << std::endl;
  else
    std::cout << point << " is not in the triangle " << a << b << c
              << std::endl;
}

int main(void) {
  Point a(0, 10);
  Point b(10, 0);
  Point c(0, 0);
  Point point(4.99f, 4.99f);
  bool ret;
  ret = bsp(a, b, c, point);
  printBSPResult(a, b, c, point, ret);
  Point point2(5, 5);
  ret = bsp(a, b, c, point2);
  printBSPResult(a, b, c, point2, ret);
  Point point3(0, 0);
  ret = bsp(a, b, c, point3);
  printBSPResult(a, b, c, point3, ret);

  return 0;
}