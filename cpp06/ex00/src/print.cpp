/**
 * @file print.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief print the argument as Number
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <cfloat>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <string>

void printChar(std::string const arg, long long c) {
  std::cout << "char: ";
  if (c < CHAR_MIN || c > CHAR_MAX || arg == "impossible") {
    std::cout << "impossible\n";
    return;
  }
  if (isprint(c)) {
    std::cout << "'" << static_cast<char>(c) << "'\n";
    return;
  }
  std::cout << "Non displayable\n";
}

void printInt(std::string const arg, long long c) {
  std::cout << "int: ";
  if (c < INT_MIN || c > INT_MAX || arg == "impossible") {
    std::cout << "impossible\n";
    return;
  }
  std::cout << static_cast<int>(c) << "\n";
  return;
}

void printFloat(std::string const arg, long double d) {
  std::cout << "float: ";
  if (!isinf(d) && (fabs(d) > FLT_MAX || arg == "impossible")) {
    std::cout << "impossible\n";
    return;
  }
  std::cout << static_cast<float>(d);
  if (static_cast<int>(d) == d && d < fabs(1000000)) std::cout << ".0";
  std::cout << "f\n";
  return;
}

void printDouble(std::string const arg, long double d) {
  std::cout << "double: ";
  if (!isinf(d) && (fabsl(d) > DBL_MAX || arg == "impossible")) {
    std::cout << "impossible\n";
    return;
  }
  std::cout << static_cast<double>(d);
  if (static_cast<int>(d) == d && d < fabs(1000000)) {
    std::cout << ".0";
  }
  std::cout << std::endl;
  return;
}

void printArgument(std::string const arg) {
  char *remain;
  long long c = strtoll(arg.c_str(), &remain, 10);
  if (*remain == '\0' || (*remain == 'f' && *(remain + 1) == '\0')) {
    printChar(arg, c);
    printInt(arg, c);
  } else {
    printChar("impossible", c);
    printInt("impossible", c);
  }

  long double d = strtold(arg.c_str(), &remain);
  if (*remain == '\0' || (*remain == 'f' && *(remain + 1) == '\0')) {
    printFloat(arg, d);
    printDouble(arg, d);
  } else {
    printFloat("impossible", d);
    printDouble("impossible", d);
  }
}