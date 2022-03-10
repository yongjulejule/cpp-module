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

class ICharacter;

class AMateria {
 protected:
  std::string _type;

 public:
  AMateria(void);
  AMateria(std::string const& type);
  AMateria(AMateria const& src);
  AMateria& operator=(AMateria const& src);

  std::string const& getType(void) const;  // Returns the materia type
  virtual AMateria* clone(void) const = 0;
  virtual void use(ICharacter& target);

  virtual ~AMateria(void);
};

#endif  // AMATERIA_HPP