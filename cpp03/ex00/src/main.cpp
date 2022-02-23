/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief ClapTraps' lives
 * @version 0.1
 * @date 2022-02-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

#include "ClapTrap.hpp"

int main(int argc, char **argv) {
  if (argc != 3) {
    std::cout << "give me 2 arguments which name of ClapTrap\n";
    return EXIT_FAILURE;
  }
  ClapTrap robot1(argv[1]);
  ClapTrap robot2(argv[2]);

  robot1.attack(robot2.getName());
  robot2.takeDamage(robot1.getAttackDamage());
  robot2.takeDamage(robot1.getAttackDamage());
  robot2.takeDamage(robot1.getAttackDamage());
  robot2.takeDamage(robot1.getAttackDamage());
  robot2.takeDamage(robot1.getAttackDamage());
  robot2.beRepared(100);
}