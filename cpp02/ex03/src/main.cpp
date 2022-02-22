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

int main(void) {
  Point a(10, 20);
  Point b(1, 2);
  Point c(100, 201);
  Point point(1, 4);
  std::cout << bsp(a, b, c, point) << std::endl;

  return 0;
}