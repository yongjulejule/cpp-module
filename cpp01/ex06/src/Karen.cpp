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
  int levelFlag = 0;
  std::string levelList[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  for (; levelFlag < 4; levelFlag++) {
    if (levelList[levelFlag] == level) break;
  }
  switch (levelFlag) {
    case DEBUG:
      this->debug();
    case INFO:
      this->info();
    case WARNING:
      this->warning();
    case ERROR: {
      this->error();
      break;
    }
    default: {
      std::cout << "[ Probably complaining about insignificant problems]\n";
    }
  }
}
