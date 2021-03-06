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
void printArray(const T& member) {
  std::cout << member << std::endl;
}

int main(int argc, char** argv, char** envp) {
  {
    std::cout << "========= int array tests =========" << std::endl;
    int array[5] = {1, 2, 3, 4, 5};
    iter(array, 5, printArray);
  }
  {
    std::cout << "========= argv tests =========" << std::endl;
    iter(argv, argc, printArray);
  }
  {
    std::cout << "========= envp tests =========" << std::endl;
    int size = 0;
    while (envp[size]) size++;
    std::string envArray[size];
    for (int i = 0; i < size; i++) envArray[i] = envp[i];
    iter(envArray, size, printArray);
  }
  return EXIT_SUCCESS;
}