/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief test main
 * @version 0.1
 * @date 2022-02-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main(void) {
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
  ICharacter* me = new Character("me");
  AMateria* tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  ICharacter* bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);
  bob->use(0, *me);

  delete bob;
  delete me;
  delete src;
  return 0;
}