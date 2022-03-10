/**
 * @file Cure.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief class Cure derieved from abstract Materia declaration
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
 public:
  Cure(void);
  Cure(Cure const & src);
  Cure const &operator=(Cure const &);

  AMateria *clone(void) const;
  void use(ICharacter &target);
  ~Cure(void);
};

#endif  // CURE_HPP