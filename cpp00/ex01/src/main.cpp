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