/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-19
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <fstream>
#include <string>

 /**
	* @brief  read file until meet EOF and return the content as std::string
	*
	* @param filePath /path/to/file
	* @return std::string
	*/
const std::string readFileIntoString(const std::string& filePath) {
	if (filePath[filePath.size() - 1] == '/' || filePath == "." || filePath == "..") {
		std::cerr << "Error : " << filePath << " Is a directory\n";
		exit(EXIT_FAILURE);
	}

	std::ifstream src;

	src.exceptions(std::ifstream::failbit | std::ifstream::badbit);
	try {
		src.open(filePath, std::ios::in);
		return std::string((std::istreambuf_iterator<char>(src)), std::istreambuf_iterator<char>());
	}
	catch (std::ifstream::failure& e) {
		std::string state = src.rdstate() == std::ios::failbit ? "failbit!" : "badbit!";
		std::cerr << "Error : Caught an ios_base::failure : " << e.what() << "\nstd::ios rdstatus : " << state << "\n";
		exit(EXIT_FAILURE);
	}
}

int main(int argc, char** argv) {
	if (argc != 4) {
		std::cout << "Error : Invalid Arguments\n";
		return EXIT_FAILURE;
	}
	const std::string content = readFileIntoString(argv[1]);
	std::cout << content;
	return EXIT_SUCCESS;
}