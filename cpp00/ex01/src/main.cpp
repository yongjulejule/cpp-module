/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Phonebook program
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

#include "phoneBook.hpp"

Contact getContact(void) {
  std::cout << "First Name: ";
  std::string firstName;
  std::getline(std::cin, firstName);
  std::cout << "Last Name: ";
  std::string lastName;
  std::getline(std::cin, lastName);
  std::cout << "Nickname: ";
  std::string nickname;
  std::getline(std::cin, nickname);
  std::cout << "Phone Number: ";
  std::string phoneNumber;
  std::getline(std::cin, phoneNumber);
  std::cout << "Darkest Secret: ";
  std::string darkestSecret;
  std::getline(std::cin, darkestSecret);
  Contact contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
  return contact;
}

int main(void) {
  PhoneBook phoneBook;
  std::string commend;

  std::cin.exceptions(std::ios::failbit | std::ios::badbit | std::ios::eofbit);
  try {
    do {
      std::cout << "Please Enter Commends: ADD, SEARCH, EXIT\n"
                << "$>";
      std::getline(std::cin, commend);
      if (commend == "ADD") {
        Contact contact = getContact();
        phoneBook.updateContact(contact);
      } else if (commend == "SEARCH") {
        phoneBook.printPhoneBook();
      } else if (commend == "EXIT") {
        break;
      } else {
        std::cout << "Invalid command." << std::endl;
      }
    } while (std::cin.rdstate() == (std::ios::goodbit));
  } catch (std::exception &e) {
    if (!std::cin.eof()) std::cout << "Error: " << e.what() << std::endl;
  }

  std::cout << "Goodbye!" << std::endl;
  return 0;
}