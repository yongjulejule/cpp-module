/**
 * @file replace.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief replace content in file and save to filename.replace
 * @version 0.1
 * @date 2022-02-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "replace.hpp"

#include <fstream>

const std::string readFileIntoString(const std::string& filePath) {
  if (filePath[filePath.size() - 1] == '/' || filePath == "." ||
      filePath == "..") {
    std::cerr << "Error : " << filePath << " Is a directory\n";
    exit(EXIT_FAILURE);
  }

  std::ifstream src;
  src.exceptions(std::ifstream::failbit | std::ifstream::badbit);
  try {
    src.open(filePath, std::ios::in);
    src.seekg(0, std::ios::end);
    const long long size = src.tellg();
    src.seekg(0, std::ios::beg);
    std::string content(size, '\0');
    src.read(&content[0], size);
    return content;
  } catch (std::ifstream::failure& e) {
    std::string state =
        src.rdstate() == std::ios::failbit ? "failbit!" : "badbit!";
    std::cerr << "Error : readFileIntoString : Caught an ios_base::failure : "
              << e.what() << "\nstd::ios rdstatus : " << state << "\n";
    exit(EXIT_FAILURE);
  }
}

const std::string replaceContent(const std::string& from, const std::string& to,
                                 const std::string& content) {
  std::string newContent;
  size_t curPos = 0;
  size_t fromSize = from.size();
  while (true) {
    size_t pos = content.find(from, curPos);

    if (pos == std::string::npos) {
      newContent += content.substr(curPos);
      break;
    }
    newContent += content.substr(curPos, pos - curPos);
    newContent += to;
    curPos = pos + fromSize;
  }
  return newContent;
}

void saveToNewFile(const std::string& filePath, const std::string& newContent) {
  std::ofstream out;
  out.exceptions(std::ofstream::failbit | std::ofstream::badbit);
  try {
    out.open(filePath + ".replace", std::ios::out | std::ios::trunc);
    out << newContent;
  } catch (std::ofstream::failure& e) {
    std::string state =
        out.rdstate() == std::ios::failbit ? "failbit!" : "badbit!";
    std::cerr << "Error : saveToNewFile : Caught an ios_base::failure : "
              << e.what() << "\nstd::ios rdstatus : " << state << "\n";
    exit(EXIT_FAILURE);
  }
}
