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

#include "ScavTrap.hpp"

int main(int argc, char **argv) {
  if (argc != 3) {
    std::cout << "give me 2 arguments which name of ClapTrap\n";
    return EXIT_FAILURE;
  }
  ScavTrap first(argv[1]);
  ClapTrap sec(argv[2]);

  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  first.guardGate();
  sec.beRepaird(100);
  return EXIT_SUCCESS;
}