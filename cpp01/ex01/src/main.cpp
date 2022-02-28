/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief main for ex01
 * @version 0.1
 * @date 2022-02-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Zombie.hpp"

int main(void) {
  const int N = 10;

  try {
    Zombie* ZombieHorde = zombieHorde(N, "yongjule");
    for (int i = 0; i < N; i++) {
      ZombieHorde[i].announce();
    }
    delete[] ZombieHorde;
    return EXIT_SUCCESS;
  } catch (std::bad_alloc& e) {
    std::cout << "ZombieHorde: " << e.what() << ": Array Size N was " << N
              << std::endl;
    return EXIT_FAILURE;
  } catch (std::exception& e) {
    std::cout << "ZombieHorde: " << e.what() << std::endl;
    return EXIT_FAILURE;
  }
}