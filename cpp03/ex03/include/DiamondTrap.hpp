/**
 * @file DiamondTrap.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief DiamondTrap class declaration
 * @version 0.1
 * @date 2022-02-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
 private:
  std::string _name;
	using FragTrap::_hitPoints;
	using FragTrap::_maxHitPoints;
	using ScavTrap::_energyPoints;
	using ScavTrap::_maxEnergyPoints;
	using FragTrap::_attackDamage;

 public:
  DiamondTrap(void);
  DiamondTrap(std::string name);
  DiamondTrap(const DiamondTrap& src);
  DiamondTrap& operator=(const DiamondTrap& src);

	using ScavTrap::attack;
  void whoAmI(void);

  ~DiamondTrap(void);
};

#endif  // DIAMONDTRAP_HPP