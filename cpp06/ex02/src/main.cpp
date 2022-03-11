/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Identify program
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "generate.hpp"
#include "identify.hpp"

int main(void) {
  for (int i = 0; i < 100; i++) {
    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;
  }
  return 0;
}