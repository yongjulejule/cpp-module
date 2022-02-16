/**
 * @file phoneBook.cpp
 * @author yongjule
 * @date 2022-02-13
 */

#include <iostream>
#include <string>
#include "phoneBook.hpp"

int main(void) {
	PhoneBook phoneBook;
	Contact			contact;
	std::string commend;

	for (;;) {
		std::getline(std::cin, commend);
		if (commend == "ADD") {
			std::cout << "First Name: ";
			std::string firstName;
			std::getline(std::cin, firstName);
			contact.setFirstName(firstName);
			std::cout << "Last Name: ";
			std::string lastName;
			std::getline(std::cin, lastName);
			contact.setLastName(lastName);
			std::cout << "Nickname: ";
			std::string nickname;
			std::getline(std::cin, nickname);
			contact.setNickname(nickname);
			std::cout << "Phone Number: ";
			std::string phoneNumber;
			std::getline(std::cin, phoneNumber);
			contact.setPhoneNumber(phoneNumber);
			std::cout << "Darkest Secret: ";
			std::string darkestSecret;
			std::getline(std::cin, darkestSecret);
			contact.setDarkestSecret(darkestSecret);
			phoneBook.updateContact(contact);
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