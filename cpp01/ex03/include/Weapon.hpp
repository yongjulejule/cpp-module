/**
 * @file Weapon.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Weapon class
 * @version 0.1
 * @date 2022-02-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
 private:
  std::string _type;

 public:
  Weapon(void);
  Weapon(std::string type);
  Weapon(const Weapon& src);
  ~Weapon(void);
  Weapon& operator=(const Weapon& src);
  std::string getType(void) const;
  void setType(std::string type);
};

#endif  // WEAPON_HPP