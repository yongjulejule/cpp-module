/**
 * @file phoneBook.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Phonebook class declaration
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>

#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook {
 private:
  Contact _contact[MAX_CONTACTS];
  int _idx;

 public:
  PhoneBook(void);
  ~PhoneBook(void);

  bool updateContact(void);
  bool printPhoneBook(void);
};

bool getLineFromStdin(std::string& line);

#endif  // PHONEBOOK_HPP