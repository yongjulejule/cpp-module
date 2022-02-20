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

#include <iostream>
#include "Karen.hpp"

Karen::Karen(void) { }

Karen::Karen(const Karen& src) {
	*this = src;
}

Karen::~Karen(void) { }

void Karen::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
}

void Karen::info(void) {
	std::cout << "[ INFO ]" << std::endl;
}

void Karen::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
}

void Karen::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
}

void Karen::complain(std::string level) {
	std::string levelList[4] = { "debug", "info", "warning", "error" };
	// 왜 이렇게 해야함...??????????? 어렵다...
	void (Karen:: * logger[4])(void) = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
	for (int i = 0; i < 4; i++) {
		if (levelList[i] == level) {
			(this->*logger[i])();
			break;
		}
	}
}
