/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief main for testing serialization and deserialization
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iomanip>
#include <iostream>

#include "Data.hpp"
#include "serialization.hpp"

int main(void) {
  Data* ptr = new Data();
  std::cout << "ptr: " << ptr << std::endl;
  std::cout << ptr->price << std::endl;
  std::cout << ptr->name << std::endl;

  uintptr_t raw = serialize(ptr);
  std::cout << "\nSERIALIZE ADDRESS\n\n";
  std::cout << "raw: " << raw << std::endl;
  std::cout << "raw: " << std::hex << raw << std::dec << std::endl;

  Data* ptr2 = deserialize(raw);
  std::cout << "\nDESERIALIZE ADDRESS\n\n";
  std::cout << "ptr2: " << ptr2 << std::endl;
  std::cout << ptr2->price << std::endl;
  std::cout << ptr2->name << std::endl;

  std::cout << "Are addresses equal? (0: false, 1: true) => " << (ptr == ptr2)
            << std::endl;

  delete ptr;
  return 0;
}