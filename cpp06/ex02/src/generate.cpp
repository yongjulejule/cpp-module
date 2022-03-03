/**
 * @file generate.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief generate random class
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <cstdlib>
#include <ctime>
#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int generateRandomNumber(int min, int max) {
  static bool first = true;
  if (first) {
    srand(time(NULL));
    first = false;
  }
  return min + rand() % (max - min + 1);
}

Base* generate(void) {
  int randomNumber = generateRandomNumber(0, 2);
  switch (randomNumber) {
    case 0:
      std::cout << "class A is generated!\n";
      return new A();
    case 1:
      std::cout << "class B is generated!\n";
      return new B();
    default:
      std::cout << "class C is generated!\n";
      return new C();
  }
}

void identify(Base* p) {
  if (p == NULL) {
    std::cout << "NULL" << std::endl;
  } else if (dynamic_cast<A*>(p)) {
    std::cout << "Identified class: A" << std::endl;
  } else if (dynamic_cast<B*>(p)) {
    std::cout << "Identified class: B" << std::endl;
  } else if (dynamic_cast<C*>(p)) {
    std::cout << "Identified class: C" << std::endl;
  } else {
    std::cout << "Identified class: unknown" << std::endl;
  }
}

bool identifyRefA(Base& p) {
  try {
    Base base = dynamic_cast<A&>(p);
    return true;
  } catch (std::bad_cast& e) {
    return false;
  }
}

bool identifyRefB(Base& p) {
  try {
    Base base = dynamic_cast<B&>(p);
    return true;
  } catch (std::bad_cast& e) {
    return false;
  }
}

bool identifyRefC(Base& p) {
  try {
    Base base = dynamic_cast<C&>(p);
    return true;
  } catch (std::bad_cast& e) {
    return false;
  }
}

void identify(Base& p) {
  if (identifyRefA(p)) {
    std::cout << "Identified class: A" << std::endl;
  } else if (identifyRefB(p)) {
    std::cout << "Identified class: B" << std::endl;
  } else if (identifyRefC(p)) {
    std::cout << "Identified class: C" << std::endl;
  } else {
    std::cout << "Identified class: unknown" << std::endl;
  }
}