/**
 * @file AMateria.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Abstract Materia class declaration
 * @version 0.1
 * @date 2022-02-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria {
 protected:
  std::string _type;

 public:
  AMateria(std::string const& type);

  std::string const& getType(void) const;  // Returns the materia type
  virtual AMateria* clone(void) const = 0;
  virtual void use(ICharacter& target);

  virtual ~AMateria(void);
};

#endif  // AMATERIA_HPP