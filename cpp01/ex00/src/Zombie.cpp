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

Zombie::Zombie(std::string name) : _name(name) {
  std::cout << "Zombie "
            << "<" << name << ">"
            << " born!" << std::endl;
}

Zombie::~Zombie() {
  std::cout << "Zombie "
            << "<" << this->_name << ">"
            << " dead..." << std::endl;
}

void Zombie::announce(void) {
  std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
