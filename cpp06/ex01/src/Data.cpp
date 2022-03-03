/**
 * @file Data.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Data structure initiation and destruction
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Data.hpp"

Data::Data(void) {
  price = 418880;
  name = new char[30];
  for (int i = 0; i < 30; i++) {
    name[i] = "HAPPY HACKING"[i];
  }
}

Data::~Data(void) { delete[] name; }