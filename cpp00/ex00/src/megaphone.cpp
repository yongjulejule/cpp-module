/**
 * @file megaphone.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief program Megaphone
 * @version 0.1
 * @date 2022-02-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <string>

int main(int argc, char** argv) {
  if (argc <= 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return EXIT_SUCCESS;
  }
  for (int i = 1; i < argc; i++) {
    std::string str(argv[i]);
    const int length = str.size();

    for (int j = 0; j < length; j++) str[j] = std::toupper(str[j]);
    std::cout << str << " ";
  }
  std::cout << std::endl;
  return EXIT_SUCCESS;
}
