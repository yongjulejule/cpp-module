/**
 * @file phoneBook.hpp
 * @author yongjule
 * @date 2022-02-16
 */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#	include <iostream>
#	include <string>

#	define MAX_CONTACTS 8


 /**
	* @class Contact
	* @brief Contact class
	*/
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




/**
 * @class PhoneBook
 * @brief PhoneBook class
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

#endif