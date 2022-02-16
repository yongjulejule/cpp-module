/**
 * @file phoneBook.cpp
 * @author yongjule
 * @date 2022-02-13
 */

#include <iostream>
#include <string>
#include "phoneBook.hpp"
inline bool Contact::setFirstName(std::string firstName) {
	_firstName = firstName;
	return true;
}

inline bool Contact::setLastName(std::string lastName) {
	_lastName = lastName;
	return true;
}

inline bool Contact::setNickname(std::string nickname) {
	_nickname = nickname;
	return true;
}

inline bool Contact::setPhoneNumber(std::string phoneNumber) {
	_phoneNumber = phoneNumber;
	return true;
}

inline bool Contact::setDarkestSecret(std::string darkestSecret) {
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