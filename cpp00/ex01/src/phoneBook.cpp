/**
 * @file phoneBook.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief class phoneBook implementation
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "phoneBook.hpp"

#include <iomanip>
#include <iostream>

PhoneBook::PhoneBook(void) { _idx = 0; }

PhoneBook::~PhoneBook(void) {
  std::cout << "Discard PhoneBook..." << std::endl;
}

static void printTableRow(void) {
  std::cout << '|' << std::setw(10) << std::right << "index" << '|'
            << std::setw(10) << "First Name" << '|' << std::setw(10)
            << "Last Name" << '|' << std::setw(10) << "Nickname" << '|'
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
  std::cout << '|' << std::setw(10) << std::right << idx + 1 << '|'
            << std::setw(10) << getPrintableString(contact.getFirstName())
            << '|' << std::setw(10) << getPrintableString(contact.getLastName())
            << '|' << std::setw(10) << getPrintableString(contact.getNickname())
            << '|' << std::endl;
}

bool PhoneBook::printPhoneBook() {
  int max = (_idx < MAX_CONTACTS) ? _idx : MAX_CONTACTS;

  printTableRow();
  for (int i = 0; i < max; i++) {
    printTableRow(i, _contact[i]);
  }

  std::cout << "Enter index to search contact: ";
  std::string commend;
  if (!getLineFromStdin(commend)) return false;
  if (commend.size() > 1 || (commend.at(0) < '1' || commend.at(0) > '8')) {
    std::cout << "Invalid index." << std::endl;
  } else {
    int idx = commend.at(0) - '0' - 1;
    if (idx >= max) {
      std::cout << "Invalid index." << std::endl;
    } else {
      std::cout << "First Name: " << _contact[idx].getFirstName() << std::endl;
      std::cout << "Last Name: " << _contact[idx].getLastName() << std::endl;
      std::cout << "Nickname: " << _contact[idx].getNickname() << std::endl;
      std::cout << "Phone Number: " << _contact[idx].getPhoneNumber()
                << std::endl;
      std::cout << "Darkest Secret: " << _contact[idx].getDarkestSecret()
                << std::endl;
    }
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

bool getLineFromStdin(std::string& line) {
  static std::istream& is = std::cin;
  std::getline(is, line);
  if (is.rdstate() != std::ios::goodbit) {
    return false;
  }
  return true;
}