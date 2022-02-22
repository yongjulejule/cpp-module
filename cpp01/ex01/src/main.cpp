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
  const int N = 10;

  Zombie* ZombieHorde = zombieHorde(N, "yongjule");
  for (int i = 0; i < N; i++) {
    ZombieHorde[i].announce();
  }
  delete[] ZombieHorde;
  return 0;
}