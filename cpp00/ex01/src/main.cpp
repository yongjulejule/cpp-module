/**
 * @file phoneBook.cpp
 * @author yongjule
 * @date 2022-02-13
 */

#include "getLineFromStdin.hpp"
#include "phoneBook.hpp"

int main(void) {
  PhoneBook phoneBook;
  Contact contact;
  std::string commend;

  do {
    std::cout << "Please Enter Commends: ADD, SEARCH, EXIT\n";
    if (!getLineFromStdin(commend)) break;
    if (commend == "ADD") {
      phoneBook.updateContact();
    } else if (commend == "SEARCH") {
      phoneBook.printPhoneBook();
    } else if (commend == "EXIT") {
      break;
    } else if (!std::cin.eof()) {
      std::cout << "Invalid command." << std::endl;
    }
  } while (std::cin.rdstate() == (std::ios::goodbit));

  if (std::cin.rdstate() != (std::ios::goodbit | std::ios::eofbit))
    std::cout << std::endl;
  std::cout << "Goodbye!" << std::endl;

  return 0;
}