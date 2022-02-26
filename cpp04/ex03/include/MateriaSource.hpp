/**
 * @file MateriaSource.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief MateriaSource class derived from Interface MateriaSource declaration
 * @version 0.1
 * @date 2022-02-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#define NUMBER_OF_MATERIAS 2

class MateriaSource : public IMateriaSource {
 private:
  AMateria **_materias;

 public:
  MateriaSource(void);
  MateriaSource(MateriaSource const &src);
  ~MateriaSource(void);
  MateriaSource const &operator=(MateriaSource const &src);
  void learnMateria(AMateria *materia);
  AMateria *createMateria(std::string const &type);
};

#endif  // MATERIASOURCE_HPP