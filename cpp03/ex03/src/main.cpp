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

#include "DiamondTrap.hpp"

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cout << "give me 2 arguments which name of Traps\n";
    return EXIT_FAILURE;
  }
  ClapTrap *test1 = new ClapTrap("testClap");
  ClapTrap *test2 = new DiamondTrap("testDia");
  ScavTrap first(argv[1]);
  FragTrap sec(argv[2]);
  DiamondTrap third(argv[3]);

  test1->attack(first.getName());
  test2->attack(first.getName());
  delete test2;
  delete test1;

  third.attack(first.getName());
  third.whoAmI();
  first.takeDamage(first.getAttackDamage());
  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  for (int i = 0; i < 10; i++) {
    sec.highFivesGuys();
  }
  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  first.guardGate();
  sec.beRepaird(200);
  return EXIT_SUCCESS;
}