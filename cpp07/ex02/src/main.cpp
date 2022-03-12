/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Array template class test
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

#include "Array.hpp"
#define MAX_VAL 750

void subjectTest(void) {
  Array<int> numbers(MAX_VAL);
  int* mirror = new int[MAX_VAL];
  srand(time(NULL));
  for (int i = 0; i < MAX_VAL; i++) {
    const int value = rand();
    numbers[i] = value;
    mirror[i] = value;
  }
  // SCOPE
  {
    Array<int> tmp = numbers;
    Array<int> test(tmp);
  }

  for (int i = 0; i < MAX_VAL; i++) {
    if (mirror[i] != numbers[i]) {
      std::cerr << "didn't save the same value!!" << std::endl;
    }
  }
  try {
    numbers[-2] = 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
  try {
    numbers[MAX_VAL] = 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  for (int i = 0; i < MAX_VAL; i++) {
    numbers[i] = rand();
  }
  delete[] mirror;  //
}

void myTests(int argc, char** argv) {
  std::cout << "===========INT ARRAY TESTS===========" << std::endl;
  Array<int> arr(10);
  for (int i = 0; i < 10; i++) arr[i] = 42;
  {
    try {
      Array<int> test(20);
      for (int i = 0; i < 20; i++)
        std::cout << "test[" << i << "]: " << test[i] << std::endl;
      arr[0] = 10;
      test = arr;
      arr[1] = 424242;
      for (int i = 0; i < 20; i++)
        std::cout << "test[" << i << "]: " << test[i] << std::endl;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }

  std::cout << "===========std::string ARRAY TESTS===========" << std::endl;
  Array<std::string>* args = new Array<std::string>(argc);
  for (int i = 0; i < argc; i++) {
    args[0][i] = argv[i];
  }

  for (int i = 0; i < argc; i++) {
    std::cout << (*args)[i] << std::endl;
  }
  delete args;
}

int main(int argc, char** argv) {
  std::cout << "SUBJECT TEST\n";
  subjectTest();
  std::cout << "MY TEST\n";
  myTests(argc, argv);
  return 0;
}