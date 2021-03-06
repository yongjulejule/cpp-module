/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief main for Fixed class
 * @version 0.1
 * @date 2022-02-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

#include "Fixed.hpp"

int main(void) {
  Fixed a;
  Fixed b(a);
  Fixed c;

  c = b;

  std::cout << a.getRawBits() << std::endl;
  std::cout << b.getRawBits() << std::endl;
  std::cout << c.getRawBits() << std::endl;

  Fixed d;
  std::cout << d.getRawBits() << std::endl;

  return 0;
}