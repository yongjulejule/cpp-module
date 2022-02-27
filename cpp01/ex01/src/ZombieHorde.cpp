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

#include <sstream>

#include "Zombie.hpp"

Zombie* zombieHorde(const int N, std::string name) {
  Zombie* horde = new Zombie[N];

  std::stringstream ss;

  for (int i = 0; i < N; i++) {
    ss << name << " No." << i + 1;
    horde[i].setName(ss.str());
    ss.str("");
  }
  return horde;
}