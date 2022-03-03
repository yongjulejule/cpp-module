/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief iter template class
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

#include "iter.hpp"

template <typename T>
void printArray(T member) {
  std::cout << member << std::endl;
}

int main(int argc, char** argv) {
  int array[5] = {1, 2, 3, 4, 5};
  iter(array, 5, printArray);
  iter(argv, argc, printArray);
  return EXIT_SUCCESS;
}