/**
 * @file Zombie.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Zombie class implementation
 * @version 0.1
 * @date 2022-02-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Zombie.hpp"

Zombie::Zombie(void) { std::cout << "Zombie born!" << std::endl; }

Zombie::~Zombie(void) {
  std::cout << "Zombie "
            << "<" << this->_name << ">"
            << " dead..." << std::endl;
}

void Zombie::announce(void) {
  std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) { this->_name = name; }