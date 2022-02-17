/**
 * @file phoneBook.cpp
 * @author yongjule
 * @date 2022-02-13
 */

#include <iomanip>
#include "phoneBook.hpp"
#include "getLineFromStdin.hpp"

inline void Contact::setFirstName(std::string firstName) {
	_firstName = firstName;
}

inline void Contact::setLastName(std::string lastName) {
	_lastName = lastName;
}

inline void Contact::setNickname(std::string nickname) {
	_nickname = nickname;
}

inline void Contact::setPhoneNumber(std::string phoneNumber) {
	_phoneNumber = phoneNumber;
}

inline void Contact::setDarkestSecret(std::string darkestSecret) {
	_darkestSecret = darkestSecret;
}

inline std::string Contact::getFirstName(void) {
	return _firstName;
}

inline std::string Contact::getLastName(void) {
	return _lastName;
}

inline std::string Contact::getNickname(void) {
	return _nickname;
}

inline std::string Contact::getPhoneNumber(void) {
	return _phoneNumber;
}

inline std::string Contact::getDarkestSecret(void) {
	return _darkestSecret;
}

PhoneBook::PhoneBook(void) {
	_idx = 0;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Discard PhoneBook..." << std::endl;
}

static void printTableRow(void) {
	std::cout << '|'
		<< std::setw(10) << std::right << "index" << '|'
		<< std::setw(10) << "First Name" << '|'
		<< std::setw(10) << "Last Name" << '|'
		<< std::setw(10) << "Nickname" << '|'
		<< std::endl;
}

static std::string getPrintableString(std::string str) {
	if (str.length() >= 10) {
		str = str.substr(0, 8);
		str += ".";
	}
	return str;
}

static void printTableRow(int idx, Contact contact) {
	std::cout << '|'
		<< std::setw(10) << std::right << idx << '|'
		<< std::setw(10) << getPrintableString(contact.getFirstName()) << '|'
		<< std::setw(10) << getPrintableString(contact.getLastName()) << '|'
		<< std::setw(10) << getPrintableString(contact.getNickname()) << '|'
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
	if (!getLineFromStdin(firstName)) return false;
	contact.setFirstName(firstName);
	std::cout << "Last Name: ";
	std::string lastName;
	if (!getLineFromStdin(lastName)) return false;
	contact.setLastName(lastName);
	std::cout << "Nickname: ";
	std::string nickname;
	if (!getLineFromStdin(nickname)) return false;
	contact.setNickname(nickname);
	std::cout << "Phone Number: ";
	std::string phoneNumber;
	if (!getLineFromStdin(phoneNumber)) return false;
	contact.setPhoneNumber(phoneNumber);
	std::cout << "Darkest Secret: ";
	std::string darkestSecret;
	if (!getLineFromStdin(darkestSecret)) return false;
	contact.setDarkestSecret(darkestSecret);

	_contact[_idx % MAX_CONTACTS] = contact;
	_idx += 1;
	return true;
}