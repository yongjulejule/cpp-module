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
  this->_materias = new AMateria*[NUMBER_OF_MATERIAS];
  for (int i = 0; i < NUMBER_OF_MATERIAS; i++) {
    this->_materias[i] = NULL;
  }
}

MateriaSource::MateriaSource(MateriaSource const& src) : _materias(NULL) {
  *this = src;
}

MateriaSource const& MateriaSource::operator=(MateriaSource const& src) {
  if (this->_materias != NULL) delete this->_materias;
  this->_materias = new AMateria*[NUMBER_OF_MATERIAS];
  for (int i = 0; i < NUMBER_OF_MATERIAS; i++) {
    this->_materias[i] = src._materias[i];
  }
  return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
  for (int i = 0; i < NUMBER_OF_MATERIAS; i++) {
    if (this->_materias[i] == NULL) {
      this->_materias[i] = materia;
      return;
    }
  }
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  for (int i = 0; i < NUMBER_OF_MATERIAS; i++) {
    if (this->_materias[i] != NULL) {
      if (type == this->_materias[i]->getType())
        return this->_materias[i]->clone();
    }
  }
  return NULL;
}

MateriaSource::~MateriaSource(void) { delete this->_materias; }