/**
 * @file ClapTrap.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief ClapTrap class declaration
 * @version 0.1
 * @date 2022-02-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
 private:
  const static unsigned int _maxHitPoints = 10;
  const static unsigned int _maxEnergyPoints = 10;

 protected:
  std::string _name;
  unsigned int _hitPoints;
  unsigned int _energyPoints;
  unsigned int _attackDamage;

 public:
  ClapTrap(void);
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap& src);
  ClapTrap& operator=(const ClapTrap& src);

  void attack(std::string const& target);
  void takeDamage(unsigned int amount);
  void beRepared(unsigned int amount);

  std::string getName(void) const;
  unsigned int getHitPoint(void) const;
  unsigned int getEnergyPoint(void) const;
  unsigned int getAttackDamage(void) const;

  ~ClapTrap(void);
};

#endif  // CLAPTRAP_HPP