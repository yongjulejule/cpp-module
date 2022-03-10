/**
 * @file MateriaSource.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief MateriaSource class derived from Interface MateriaSource
 * 				implementation
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "MateriaSource.hpp"

#include <iostream>

MateriaSource::MateriaSource(void) {
  std::cout << "MateriaSource::MateriaSource(void)\n";
  this->_materias = new AMateria*[NUMBER_OF_MATERIAS];
  for (int i = 0; i < NUMBER_OF_MATERIAS; i++) {
    this->_materias[i] = NULL;
  }
}

MateriaSource::MateriaSource(MateriaSource const& src) {
  std::cout << "MateriaSource::MateriaSource(MateriaSource const& src)\n";
  *this = src;
}

MateriaSource const& MateriaSource::operator=(MateriaSource const& src) {
  std::cout << "MateriaSource::operator=(MateriaSource const& src)\n";
  delete this->_materias;
  this->_materias = new AMateria*[NUMBER_OF_MATERIAS];
  for (int i = 0; i < NUMBER_OF_MATERIAS; i++) {
    this->_materias[i] = src._materias[i];
  }
  return src;
}

void MateriaSource::learnMateria(AMateria* materia) {
  std::cout << "MateriaSource::learnMateria(AMateria* materia) type : "
            << materia->getType() << "\n";
  for (int i = 0; i < NUMBER_OF_MATERIAS; i++) {
    if (this->_materias[i] == NULL) {
      this->_materias[i] = materia;
      return;
    }
  }
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  std::cout << "MateriaSource::createMateria(std::string const& type) type : "
            << type << "\n";
  for (int i = 0; i < NUMBER_OF_MATERIAS; i++) {
    if (this->_materias[i] != NULL) {
      if (type == this->_materias[i]->getType())
        return this->_materias[i]->clone();
    }
  }
  return NULL;
}

MateriaSource::~MateriaSource(void) {
  std::cout << "MaterialSource::~MateriaSource(void)\n";
  delete this->_materias;
}