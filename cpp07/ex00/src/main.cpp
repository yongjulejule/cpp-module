/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief test main for template function
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

#include "whatever.hpp"

int main(void) {
  int a = 2;
  int b = 3;
  std::cout << "a = " << a << ", b = " << b << std::endl;
  ::swap(a, b);
  std::cout << "swap( a, b ) : a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
  std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
  std::string c = "chaine1";
  std::string d = "chaine2";
  std::cout << "c = " << c << ", d = " << d << std::endl;
  ::swap(c, d);
  std::cout << "swap( c, d ) : c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
  std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

  {
    std::cout << "=========float test===========" << std::endl;
    float e = -234563463456.35346346345342340f;
    float f = -INFINITY;
    std::cout << "e = " << e << ", f = " << f << std::endl;
    ::swap(e, f);
    std::cout << "swap( e, f ) : e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min(e, f) << std::endl;
    std::cout << "max( e, f ) = " << ::max(e, f) << std::endl;
  }
  {
    std::cout << "=========uint64_t test===========" << std::endl;
    uint64_t e = 18446744073709551615ULL;
    uint64_t f = 18446744073709551614ULL;
    std::wcout << "e = " << e << ", f = " << f << std::endl;
    ::swap(e, f);
    std::cout << "swap( e, f ) : e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min(e, f) << std::endl;
    std::cout << "max( e, f ) = " << ::max(e, f) << std::endl;
  }
  return 0;
}
