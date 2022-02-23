/**
 * @file FragTrap.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief FragTrap class declaration
 * @version 0.1
 * @date 2022-02-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
 private:
 public:
  FragTrap(void);
  FragTrap(std::string name);
  FragTrap(const FragTrap& src);
  FragTrap& operator=(const FragTrap& src);
  ~FragTrap(void);

  void highFivesGuys(void);
};

#endif  // FRAGTRAP_HPP