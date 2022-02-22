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

int main(void) {
  Fixed a;
  Fixed const b(10);

  std::cout << "a is " << a << std::endl;
  a = Fixed(1234.4321f);
  std::cout << "a = Fixed(1234.4321f) : " << a << std::endl;

  std::cout << "=========== Here is example in to Test ===========\n\n";
  std::cout << "a is " << a << std::endl;
  std::cout << "b is " << b << std::endl;

  std::cout << "\n=========== Here is Arithmetic operation ===========\n\n";
  std::cout << "a + b : " << (a + b) << std::endl;
  std::cout << "a - b : " << (a - b) << std::endl;
  std::cout << "a * b : " << (a * b) << std::endl;
  std::cout << "a / b : " << (a / b) << std::endl;

  std::cout << "\n=========== Here is comparision operation ===========\n\n";
  std::cout << "a > b : " << (a > b) << std::endl;
  std::cout << "a < b : " << (a < b) << std::endl;
  std::cout << "a >= b : " << (a >= b) << std::endl;
  std::cout << "a <= b : " << (a <= b) << std::endl;
  std::cout << "a == b : " << (a == b) << std::endl;
  std::cout << "a != b : " << (a != b) << std::endl;
  std::cout << "\n=========== Here is incre/decrement ===========\n\n";
  std::cout << "a is " << a << std::endl;
  std::cout << "a++ : " << a++ << std::endl;
  std::cout << "a is " << a << std::endl;
  std::cout << "a-- : " << a-- << std::endl;
  std::cout << "a is " << a << std::endl;
  std::cout << "++a : " << ++a << std::endl;
  std::cout << "a is " << a << std::endl;
  std::cout << "--a : " << --a << std::endl;
  std::cout << "a is " << a << std::endl;
  std::cout << "\n=========== Here is min/max ===========\n\n";
  const Fixed big = Fixed::max(a, b);
  Fixed small = Fixed::min(a, b);

  std::cout << "max(a, b) : " << big << std::endl;
  std::cout << "min(a, b) : " << small << std::endl;

  // From Subject
  std::cout << "\n=========== Here is example in Subject ===========\n\n";
  Fixed A;
  Fixed const B(Fixed(5.05f) * Fixed(2));
  std::cout << A << std::endl;
  std::cout << ++A << std::endl;
  std::cout << A << std::endl;
  std::cout << A++ << std::endl;
  std::cout << A << std::endl;
  std::cout << B << std::endl;
  std::cout << Fixed::max(A, B) << std::endl;
  return 0;
}