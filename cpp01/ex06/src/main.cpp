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

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Only One Argument needed\n";
    return EXIT_FAILURE;
  }

  Karen karen;
  std::string level = argv[1];
  const size_t length = level.length();
  for (size_t i = 0; i < length; i++) {
    level[i] = toupper(level[i]);
  }

  karen.complain(argv[1]);

  return 0;
}