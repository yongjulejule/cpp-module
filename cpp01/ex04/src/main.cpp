/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief main for replace program
 * @version 0.1
 * @date 2022-02-19
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "replace.hpp"

int main(int argc, char** argv) {
	if (argc != 4) {
		std::cout << "Error : Invalid Arguments\n";
		return EXIT_FAILURE;
	} else if (!*argv[1] || !*argv[2] || !*argv[3]) {
		std::cout << "Error : Arguments cannot be empty\n";
	}
	const std::string content = readFileIntoString(argv[1]);
	const std::string newContent = replaceContent(argv[2], argv[3], content);
	saveToNewFile(argv[1], newContent);
	return EXIT_SUCCESS;
}