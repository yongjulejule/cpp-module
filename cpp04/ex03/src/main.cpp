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

#include <iostream>

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

void subjectTest(void) {
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
}

void myTests(void) {
  std::cout << "myTests()" << std::endl;

  IMateriaSource* src = new MateriaSource();

  for (int i = 0; i < 2; i++) {
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
  }

  ICharacter* jule = new Character("jule");
  jule->unequip(0);

  AMateria* tmp;
  tmp = src->createMateria("abc");
  jule->equip(tmp);
  delete tmp;
  tmp = NULL;

  jule->use(0, *jule);
  tmp = src->createMateria("cure");

  AMateria* tmp2;
  for (int i = 0; i < 10; i++) {
    if (i == 2) {
      jule->equip(tmp);
    }
    tmp2 = src->createMateria("ice");
    jule->equip(tmp2);
    delete tmp2;
    tmp2 = NULL;
  }

  for (int i = 0; i < 10; i++) jule->use(i, *jule);
  jule->unequip(1);

  delete tmp;
  delete jule;
  delete src;

  Character* ch1 = new Character("ch1");
  Character* ch2 = new Character(*ch1);
  MateriaSource* src2 = new MateriaSource();
  for (int i = 0; i < 2; i++) {
    src2->learnMateria(new Ice());
    src2->learnMateria(new Cure());
  }
  MateriaSource* src3 = new MateriaSource(*src2);
  delete src2;
  delete src3;
  delete ch1;
  delete ch2;
}

int main(void) {
  subjectTest();
  myTests();

  return 0;
}