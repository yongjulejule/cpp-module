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

#include "Karen.hpp"

int main(void) {
  Karen karen;
  std::cout << "======== debug =========" << std::endl;
  karen.complain("debug");
  std::cout << "======== info =========" << std::endl;
  karen.complain("info");
  std::cout << "======== warning =========" << std::endl;
  karen.complain("warning");
  std::cout << "======== error =========" << std::endl;
  karen.complain("error");
  return 0;
}