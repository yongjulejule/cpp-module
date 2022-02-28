/**
 * @file Karen.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Karen.hpp"

#include <iostream>

Karen::Karen(void) {}

Karen::~Karen(void) {}

void Karen::debug(void) {
  std::cout << "[ DEBUG ]\nDEBUG makes me tired... somebody help me\n\n";
}

void Karen::info(void) {
  std::cout << "[ INFO ]\nUseful Infomation haha Isn't it?\n\n";
}

void Karen::warning(void) {
  std::cout
      << "[ WARNING ]\nOh Its Warning!! If u wanna see your program gonna "
         "crash, Just ignore it!\n\n";
}

void Karen::error(void) {
  std::cout << "[ ERROR ]\nHAHA YOUR PROGRAM IS TRASH\n\n";
}

void Karen::complain(std::string level) {
  std::string levelList[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Karen::*logger[4])(void) = {&Karen::debug, &Karen::info,
                                    &Karen::warning, &Karen::error};
  for (int i = 0; i < 4; i++) {
    if (levelList[i] == level) {
      (this->*logger[i])();
      break;
    }
  }
}
