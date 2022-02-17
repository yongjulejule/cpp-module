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
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickname(std::string nickname);
	void setPhoneNumber(std::string phoneNumber);
	void setDarkestSecret(std::string darkestSecret);
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickname(void);
	std::string getPhoneNumber(void);
	std::string getDarkestSecret(void);
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
	PhoneBook(void);
	~PhoneBook(void);

	bool updateContact(void);
	bool printPhoneBook(void);
};

#endif // PHONEBOOK_HPP