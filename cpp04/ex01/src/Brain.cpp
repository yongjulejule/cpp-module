/**
 * @file Brain.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief  Brain class implementation
 * @version 0.1
 * @date 2022-02-24
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Brain.hpp"

#include <iostream>
#include <sstream>

Brain::Brain(void) {
  std::cout << "Brain constructor called\n";
  for (int i = 0; i < 100; i++) {
    std::stringstream ss;
    ss << "Wonderful Ideas " << i;
    this->_ideas[i] = ss.str();
  }
}

Brain::Brain(const Brain& src) { *this = src; }

Brain& Brain::operator=(const Brain& src) {
  if (this == &src) return *this;
  for (int i = 0; i < 100; i++) {
    this->_ideas[i] = src._ideas[i];
  }
  return *this;
}

std::string* Brain::getIdeas(void) const { return (std::string*)this->_ideas; }

Brain::~Brain(void) { std::cout << "Brain destructor called\n"; }