/**
 * @file phoneBook.cpp
 * @author yongjule
 * @date 2022-02-13
 */

#include <iostream>
#include <string>

#define MAX_CONTACTS 8

 // create contact class
class Contact {
	private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
	public:
	bool setFirstName(std::string firstName);
	bool setLastName(std::string lastName);
	bool setNickname(std::string nickname);
	bool setPhoneNumber(std::string phoneNumber);
	bool setDarkestSecret(std::string darkestSecret);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
};

bool Contact::setFirstName(std::string firstName) {
	_firstName = firstName;
	return true;
}

bool Contact::setLastName(std::string lastName) {
	_lastName = lastName;
	return true;
}

bool Contact::setNickname(std::string nickname) {
	_nickname = nickname;
	return true;
}

bool Contact::setPhoneNumber(std::string phoneNumber) {
	_phoneNumber = phoneNumber;
	return true;
}

bool Contact::setDarkestSecret(std::string darkestSecret) {
	_darkestSecret = darkestSecret;
	return true;
}

std::string Contact::getFirstName() {
	return _firstName;
}

std::string Contact::getLastName() {
	return _lastName;
}

std::string Contact::getNickname() {
	return _nickname;
}

std::string Contact::getPhoneNumber() {
	return _phoneNumber;
}

std::string Contact::getDarkestSecret() {
	return _darkestSecret;
}

/**
 * @brief create PhoneBook class
 * first name, last name, nickname,
 * phone number,darkest secret
 */
class PhoneBook {
	private:
	Contact _contact[8];
	int idx;

	public:
	PhoneBook() {
		idx = 0;
		std::cout << "idx is " << idx << std::endl;
	}

	bool updateContact(Contact contact) {
		std::cout << "idx in update " << idx << std::endl;
		_contact[idx % MAX_CONTACTS] = contact;
		idx += 1;
		return true;
	}

	bool printPhoneBook();
};

bool PhoneBook::printPhoneBook() {
	int max = (idx < MAX_CONTACTS) ? idx : MAX_CONTACTS;
	for (int i = 0; i < max; i++) {
		std::cout << i << std::endl;
		std::cout << "First Name: " << _contact[i].getFirstName() << std::endl;
		std::cout << "Last Name: " << _contact[i].getLastName() << std::endl;
		std::cout << "Nickname: " << _contact[i].getNickname() << std::endl;
	}
	return true;
}

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