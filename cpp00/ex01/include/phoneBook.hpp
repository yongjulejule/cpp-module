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
	int _idx;

	public:
	PhoneBook() { _idx = 0; }

	bool updateContact();
	bool printPhoneBook();
};

#endif