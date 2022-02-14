/**
 * @file phoneBook.cpp
 * @author yongjule
 * @date 2022-02-13
 */

#include <iostream>
#include <string>

 /**
	* @brief create PhoneBook class
	* first name, last name, nickname,
	* phone number,darkest secret
	*/
class PhoneBook {
	private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	public:
	PhoneBook();
	PhoneBook(std::string _firstName,
						std::string _lastName,
						std::string _nickname,
						std::string _phoneNumber,
						std::string _darkestSecret) {
		firstName = _firstName;
		lastName = _lastName;
		nickname = _nickname;
		phoneNumber = _phoneNumber;
		darkestSecret = _darkestSecret;
	}
};

int main(void) {
	PhoneBook* phoneBook[8];
	std::string commend;
	std::getline(std::cin, commend);
	std::string list[8];

	if (commend == "ADD") {
		std::string name;
		std::cin >> name;
		std::string number;
		std::cin >> number;
		std::cout << "Phone record for " << name << " created." << std::endl;
	} else if (commend == "SEARCH") {
		std::string name;
		std::cin >> name;
		std::cout << "Phone record for " << name << " not found." << std::endl;
	} else if (commend == "EXIT") {
		std::cout << "Goodbye!" << std::endl;
		return 0;
	} else {
		std::cout << "Invalid command." << std::endl;
	}

	return 0;
}