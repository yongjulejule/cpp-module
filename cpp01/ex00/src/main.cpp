/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief main for ex00
 * @version 0.1
 * @date 2022-02-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Zombie.hpp"

int main(void) {
  Zombie* zombie = newZombie("yongjule");
  Zombie zombie2("ghan");
  randomChump("jiskim");
  delete zombie;
  return 0;
}