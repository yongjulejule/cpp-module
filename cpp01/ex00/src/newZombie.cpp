/**
 * @file newZombie.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief create new Zombie in heap
 * @version 0.1
 * @date 2022-02-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
  Zombie* zombie = new Zombie(name);
  return (zombie);
}
