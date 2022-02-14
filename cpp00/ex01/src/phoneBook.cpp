/**
 * @file phoneBook.cpp
 * @author yongjule
 * @date 2022-02-13
 */

#include <iostream>

 // create phoneBook class which contain fistName, lastName, nickName, phoneNumber, darkestScret
class PhoneBook {
	public:
	PhoneBook(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestScret);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getDarkestScret();
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickName(std::string nickName);
	void setPhoneNumber(std::string phoneNumber);
	void setDarkestScret(std::string darkestScret);
	private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestScret;
};


int main(void) {
	PhoneBook phoneBook("yongjule", "lee", "yongjule", "010-1234-5678", "12345");
	std::cout << phoneBook.getFirstName() << std::endl;
	std::cout << phoneBook.getLastName() << std::endl;
	std::cout << phoneBook.getNickName() << std::endl;
	std::cout << phoneBook.getPhoneNumber() << std::endl;
	std::cout << phoneBook.getDarkestScret() << std::endl;
	phoneBook.setFirstName("yongjule");
	phoneBook.setLastName("lee");
	phoneBook.setNickName("yongjule");
	phoneBook.setPhoneNumber("010-1234-5678");
	phoneBook.setDarkestScret("12345");
	std::cout << phoneBook.getFirstName() << std::endl;
	std::cout << phoneBook.getLastName() << std::endl;
	std::cout << phoneBook.getNickName() << std::endl;
	std::cout << phoneBook.getPhoneNumber() << std::endl;
	std::cout << phoneBook.getDarkestScret() << std::endl;


	return 0;

}