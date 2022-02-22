/**
 * @file getLineFromStdin.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @date 2022-02-17
 */

#include <iostream>
#include <string>

bool getLineFromStdin(std::string& line) {
  static std::istream& is = std::cin;
  std::getline(is, line);
  if (is.rdstate() != std::ios::goodbit) {
    is.clear();
    return false;
  }
  return true;
}
