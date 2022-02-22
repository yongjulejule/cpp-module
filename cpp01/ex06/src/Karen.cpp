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

void Karen::debug(void) { std::cout << "[ DEBUG ]" << std::endl; }

void Karen::info(void) { std::cout << "[ INFO ]" << std::endl; }

void Karen::warning(void) { std::cout << "[ WARNING ]" << std::endl; }

void Karen::error(void) { std::cout << "[ ERROR ]" << std::endl; }

void Karen::complain(std::string level) {
  int levelFlag = 0;
  std::string levelList[4] = {"debug", "info", "warning", "error"};

  for (; levelFlag < 4; levelFlag++) {
    if (levelList[levelFlag] == level) break;
  }
  switch (levelFlag) {
    case DEBUG:
      debug();
    case INFO:
      info();
    case WARNING:
      warning();
    case ERROR: {
      error();
      break;
    }
    default: {
      std::cout << "Invalid Level\n";
    }
  }
}
