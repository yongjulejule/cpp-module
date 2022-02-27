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
    str = str.substr(0, 9);
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

void PhoneBook::printPhoneBook() {
  int max = (_idx < MAX_CONTACTS) ? _idx : MAX_CONTACTS;

  printTableRow();
  for (int i = 0; i < max; i++) {
    printTableRow(i, _contact[i]);
  }

  std::cout << "Enter index to search contact: ";
  std::string commend;
  std::getline(std::cin, commend);
  if (commend.size() > 1 || (commend[0] < '1' || commend[0] > '8')) {
    std::cout << "Invalid index." << std::endl;
  } else {
    int idx = commend[0] - '0' - 1;
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
}

void PhoneBook::updateContact(const Contact& contact) {
  _contact[_idx % MAX_CONTACTS] = contact;
  _idx += 1;
  if (_idx >= MAX_CONTACTS * 2) {
    _idx -= MAX_CONTACTS;
  }
}
