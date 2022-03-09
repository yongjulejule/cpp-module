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
  ClapTrap *test1 = new ClapTrap("CLAP");
  ClapTrap *test2 = new DiamondTrap("DIAMOND");

  std::cout << std::endl;
  test1->showStat();
  test2->showStat();

  std::cout << std::endl;
  test1->attack(test2->getName());
  test2->takeDamage(test1->getAttackDamage());
  test2->attack(test1->getName());
  test1->takeDamage(test2->getAttackDamage());
  std::cout << std::endl;
  test1->showStat();
  test2->showStat();
  std::cout << std::endl;
  delete test2;
  delete test1;

  std::cout << "\n\n=============== MY TESTS ========================\n\n\n";
  if (argc != 4) {
    std::cout << "give me 3 arguments which name of Traps\n";
    return EXIT_FAILURE;
  }

  ScavTrap first(argv[1]);
  FragTrap sec(argv[2]);
  DiamondTrap third(argv[3]);

  std::cout << std::endl;

  first.showStat();
  sec.showStat();
  third.showStat();
  std::cout << std::endl;
  third.whoAmI();
  std::cout << std::endl;
  first.takeDamage(first.getAttackDamage());
  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  std::cout << std::endl;
  for (int i = 0; i < 11; i++) {
    sec.highFivesGuys();
  }
  std::cout << std::endl;
  for (int i = 0; i < 2; i++) {
    third.attack(first.getName());
    first.takeDamage(third.getAttackDamage());
  }
  std::cout << std::endl;
  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  std::cout << std::endl;
  first.showStat();
  sec.showStat();
  third.showStat();
  std::cout << std::endl;
  first.guardGate();
  std::cout << std::endl;
  sec.beRepaird(200);
  return EXIT_SUCCESS;
}