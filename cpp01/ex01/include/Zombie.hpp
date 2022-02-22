/**
 * @file Zombie.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Zombie class header file
 * @version 0.1
 * @date 2022-02-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
 private:
  std::string _name;

 public:
  Zombie(void);
  ~Zombie(void);

  void setName(std::string name);
  void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif  // ZOMBIE_HPP