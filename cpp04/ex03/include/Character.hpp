/**
 * @file Character.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief  class Character derived from interface Icharacter declaration
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

#define NUMBER_OF_SLOTS 4

class Character : public ICharacter {
 private:
  std::string _name;
  AMateria **_slot;

 public:
  Character(void);
  Character(std::string const &name);
  Character(Character const &src);
  Character const &operator=(Character const &src);

  std::string const &getName(void) const;
  void equip(AMateria *materia);
  void unequip(int idx);
  void use(int idx, ICharacter &target);
  ~Character(void);
};

#endif  // CHARACTER_HPP