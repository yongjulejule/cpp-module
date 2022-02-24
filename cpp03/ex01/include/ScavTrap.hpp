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

class ScavTrap : public ClapTrap {
 private:
  const static unsigned int _maxHitPoints = 100;
  const static unsigned int _maxEnergyPoints = 50;

 public:
  ScavTrap(void);
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap& src);
  ScavTrap& operator=(const ScavTrap& src);
  ~ScavTrap(void);

  void guardGate(void);
};

#endif  // SCAVTRAP_HPP