/**
 * @file Contact.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Contact class implementation
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Contact.hpp"

Contact::Contact(void){};

Contact::Contact(std::string firstName, std::string lastName,
                 std::string nickname, std::string phoneNumber,
                 std::string darkestSecret)
    : _firstName(firstName),
      _lastName(lastName),
      _nickname(nickname),
      _phoneNumber(phoneNumber),
      _darkestSecret(darkestSecret) {}

std::string Contact::getFirstName(void) { return _firstName; }

std::string Contact::getLastName(void) { return _lastName; }

std::string Contact::getNickname(void) { return _nickname; }

std::string Contact::getPhoneNumber(void) { return _phoneNumber; }

std::string Contact::getDarkestSecret(void) { return _darkestSecret; }