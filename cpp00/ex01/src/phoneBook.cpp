/**
 * @file phoneBook.cpp
 * @author yongjule
 * @date 2022-02-13
 */

#include "phoneBook.hpp"
#include <iomanip>

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

inline std::string Contact::getFirstName() {
	return _firstName;
}

inline std::string Contact::getLastName() {
	return _lastName;
}

inline std::string Contact::getNickname() {
	return _nickname;
}

inline std::string Contact::getPhoneNumber() {
	return _phoneNumber;
}

inline std::string Contact::getDarkestSecret() {
	return _darkestSecret;
}

static void printTableRow(void) {
	std::cout << '|'
		<< std::setw(10) << std::right << "index" << '|'
		<< std::setw(10) << "First Name" << '|'
		<< std::setw(10) << "Last Name" << '|'
		<< std::setw(10) << "Nickname" << '|'
		<< std::endl;
}

static void printTableRow(int idx, Contact contact) {
	std::cout << '|'
		<< std::setw(10) << std::right << idx << '|'
		<< std::setw(10) << contact.getFirstName() << '|'
		<< std::setw(10) << contact.getLastName() << '|'
		<< std::setw(10) << contact.getNickname() << '|'
		<< std::endl;
}

bool PhoneBook::printPhoneBook() {
	int max = (_idx < MAX_CONTACTS) ? _idx : MAX_CONTACTS;
	printTableRow();
	for (int i = 0; i < max; i++) {
		printTableRow(i, _contact[i]);
	}
	return true;
}


bool PhoneBook::updateContact() {
	Contact contact;

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

	_contact[_idx % MAX_CONTACTS] = contact;
	_idx += 1;
	return true;
}