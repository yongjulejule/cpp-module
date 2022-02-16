/**
 * @file phoneBook.cpp
 * @author yongjule
 * @date 2022-02-13
 */

#include <iomanip>
#include "phoneBook.hpp"

int main(void) {
	PhoneBook		phoneBook;
	Contact			contact;
	std::string commend;

	// TODO : EOF 만났을때, getline 에러 핸들링, cout 포멧팅 해야함
	while (!std::cin.eof()) {
		std::getline(std::cin, commend);
		if (commend == "ADD") {
			phoneBook.updateContact();
		} else if (commend == "SEARCH") {
			phoneBook.printPhoneBook();
		} else if (commend == "EXIT") {
			std::cout << "Goodbye!" << std::endl;
			return 0;
		} else {
			std::cout << "Invalid command." << std::endl;
		}
	}

	return 0;
}