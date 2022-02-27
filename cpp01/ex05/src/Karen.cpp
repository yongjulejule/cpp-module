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

Karen::Karen(const Karen& src) { *this = src; }

Karen::~Karen(void) {}

void Karen::debug(void) {
  std::cout << "[ DEBUG ] DEBUG makes me tired... somebody help me\n";
}

void Karen::info(void) {
  std::cout << "[ INFO ] Useful Infomation haha Isn't it?\n";
}

void Karen::warning(void) {
  std::cout << "[ WARNING ] Oh Its Warning!! If u wanna see your program gonna "
               "bomb, Just ignore it!\n";
}

void Karen::error(void) {
  std::cout << "[ ERROR ] HAHA YOUR PROGRAM IS TRASH\n";
}

void Karen::complain(std::string level) {
  std::string levelList[4] = {"debug", "info", "warning", "error"};
  void (Karen::*logger[4])(void) = {&Karen::debug, &Karen::info,
                                    &Karen::warning, &Karen::error};
  for (int i = 0; i < 4; i++) {
    if (levelList[i] == level) {
      (this->*logger[i])();
      break;
    }
  }
}
