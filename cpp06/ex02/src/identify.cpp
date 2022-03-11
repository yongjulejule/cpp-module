/**
 * @file identify.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief identify type of class
 * @version 0.1
 * @date 2022-03-11
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "identify.hpp"

#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

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