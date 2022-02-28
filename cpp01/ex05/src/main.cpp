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

#include "Karen.hpp"

int main(void) {
  Karen karen;

  karen.complain("DEBUG");
  karen.complain("INFO");
  karen.complain("WARNING");
  karen.complain("WARNING");
  karen.complain("WARNING");
  karen.complain("WARNING");
  karen.complain("ERROR");
  karen.complain("ERROR");
  karen.complain("ERROR");
  karen.complain("ERROR");

  return EXIT_SUCCESS;
}