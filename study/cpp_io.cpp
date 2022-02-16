/**
 * @file cpp_io.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief studying cpp io
 * @date 2022-02-16
 */

#include <ios>
#include <iostream>
#include <iomanip>
#include <unistd.h>

int main(void) {
	std::string str;

	std::cout.flags(std::ios::right);
	std::cout << std::setw(100) << "Please input a string: ";
	std::cin >> str;
	std::cout << str << std::endl;

	std::cout << "Please input a string trim ws: ";
	std::cin >> std::ws >> str;
	std::cout << str << std::endl;

	std::cout << "difference btw and endl\n";

	// for (int i = 0; i < 10; i++) {
	// 	std::cout << i << std::endl;
	// 	if (i == 9)
	// 		pause();
	// }

	// for (int i = 0; i < 10; i++) {
	// 	std::cout << i << "\n";
	// 	if (i == 3)
	// 		pause();
	// }

}