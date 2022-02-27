/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief compare pointer and reference
 * @version 0.1
 * @date 2022-02-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <string>

int main(void) {
  std::string str = "HI THIS IS BRAIN";
  std::string* pstr = &str;
  std::string& rstr = str;

  std::cout << "address of str by string: " << &str << std::endl;
  std::cout << "address of str by stringPTR: " << pstr << std::endl;
  std::cout << "address of str by stringREF: " << &rstr << std::endl;

  std::cout << "\n===============================\n\n";

  std::cout << "display str by string: " << str << std::endl;
  std::cout << "display str by stringREF: " << rstr << std::endl;
  std::cout << "display str by stringPTR: " << *pstr << std::endl;
}