/**
 * @file ScavTrap.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief ScavTrap class declaration
 * @version 0.1
 * @date 2022-02-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
 public:
  ScavTrap(void);
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap& src);
  ScavTrap& operator=(const ScavTrap& src);

  void attack(std::string const& target);
  void guardGate(void);

  virtual ~ScavTrap(void);
};

#endif  // SCAVTRAP_HPP