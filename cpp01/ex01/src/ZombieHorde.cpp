/**
 * @file ZombieHorde.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief create Zombie Horde
 * @version 0.1
 * @date 2022-02-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Zombie.hpp"

Zombie* zombieHorde(const int N, std::string name) {
  Zombie* horde = new Zombie[N];
  for (int i = 0; i < N; i++) {
    horde[i].setName(name);
  }
  return horde;
}