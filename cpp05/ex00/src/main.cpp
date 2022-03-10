/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief  I want to be a bureaucrat!
 * @version 0.1
 * @date 2022-02-28
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Bureaucrat.hpp"

int main(void) {
  try {
    Bureaucrat test("test", 145);
    for (int i = 0; i < 10; i++) {
      std::cout << test << std::endl;
      test.decrementGrade();
    }
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "====================\n";
  try {
    Bureaucrat test("test", 3);
    for (int i = 0; i < 10; i++) {
      std::cout << test << std::endl;
      test.incrementGrade();
    }
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "====================\n";
  try {
    Bureaucrat test("test", 0);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "====================\n";
  try {
    Bureaucrat test("test", 151);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}