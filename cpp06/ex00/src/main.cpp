/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief program convert
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

#include "print.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Give only one arguments\n";
    return EXIT_FAILURE;
  } else if (*argv[1] == '\0') {
    std::cout << "empty string is not allowed\n";
    return EXIT_FAILURE;
  }
  printArgument(argv[1]);

  return EXIT_SUCCESS;
}