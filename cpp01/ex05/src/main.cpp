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

#include "Karen.hpp"

int main(void) {
	Karen karen;
	karen.complain("debug");
	karen.complain("info");
	karen.complain("warning");
	karen.complain("error");
	return 0;
}