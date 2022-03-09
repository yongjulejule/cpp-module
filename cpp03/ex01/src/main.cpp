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
  std::cout << "===============Generating traps...=================\n";
  ScavTrap first(argv[1]);
  ClapTrap sec(argv[2]);
  ScavTrap third("DAEMON");
  {
    ClapTrap *forth = new ScavTrap("DAE42MON");
    forth->attack("DAE42MON");
    forth->takeDamage(forth->getAttackDamage());
    delete forth;
  }

  std::cout << "===============Traps do something=================\n";
  for (int i = 0; i < 5; i++) {
    first.attack(sec.getName());
    sec.takeDamage(first.getAttackDamage());
  }
  first.guardGate();
  for (int i = 0; i < 5; i++) {
    third.attack(first.getName());
    first.takeDamage(third.getAttackDamage());
  }
  first.guardGate();
  sec.beRepaird(100);
  std::cout << "===============Traps end=================\n";
  return EXIT_SUCCESS;
}