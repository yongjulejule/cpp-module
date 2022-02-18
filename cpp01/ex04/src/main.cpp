/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief get file name
 * @version 0.1
 * @date 2022-02-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv) {
	if (argc != 4) {
		std::cout << "Invalid Arguments\n";
		return EXIT_FAILURE;
	}
	std::ifstream src;
	src.open(argv[1], std::ios::in);
	if (!src.is_open()) {
		return EXIT_FAILURE;
	}
	std::string content;
	std::cout << src.read(content, 1000) << std::endl;
}