/**
 * @file Ice.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief class Ice derieved from abstract Materia declaration
 * @version 0.1
 * @date 2022-02-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
 public:
  Ice(void);
  Ice(Ice const &src);
  Ice const &operator=(Ice const &);

  AMateria *clone(void) const;
  void use(ICharacter &target);
  ~Ice(void);
};

#endif  // ICE_HPP