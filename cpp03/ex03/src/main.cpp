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

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(int argc, char **argv) {
  if (argc != 3) {
    std::cout << "give me 2 arguments which name of Traps\n";
    return EXIT_FAILURE;
  }
  ScavTrap first(argv[1]);
  FragTrap sec(argv[2]);

  first.attack(sec.getName());
  sec.takeDamage(first.getAttackDamage());
  sec.highFivesGuys();
  sec.highFivesGuys();
  sec.highFivesGuys();
  sec.highFivesGuys();
  sec.highFivesGuys();
  sec.highFivesGuys();
  sec.highFivesGuys();
  sec.highFivesGuys();
  sec.highFivesGuys();
  sec.highFivesGuys();
  sec.highFivesGuys();
  sec.highFivesGuys();
  sec.highFivesGuys();
  sec.highFivesGuys();
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