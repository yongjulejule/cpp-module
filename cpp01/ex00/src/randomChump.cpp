/**
 * @file randomChump.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief create Zombie and announce in stack
 * @version 0.1
 * @date 2022-02-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Zombie.hpp"

void randomChump(std::string name) {
  Zombie zombie = Zombie(name);
  zombie.announce();
}