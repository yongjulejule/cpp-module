/**
 * @file ICharacter.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Interface class Character declaration
 * @version 0.1
 * @date 2022-02-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>

class AMateria;

class ICharacter {
 public:
  virtual ~ICharacter(void){};
  virtual std::string const& getName() const = 0;
  virtual void equip(AMateria* m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter& target) = 0;
};

#endif  // ICHARACTER_HPP