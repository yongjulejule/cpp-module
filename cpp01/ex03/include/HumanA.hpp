/**
 * @file HumanA.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief HumanA class declaration
 * @version 0.1
 * @date 2022-02-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
 private:
  std::string _name;
  Weapon& _weapon;

 public:
  HumanA(std::string name, Weapon& weapon);

  void attack(void) const;

  ~HumanA(void);
};

#endif  // HUMANA_HPP