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

#define GREEN "\033[32m"
#define L_GREEN "\033[1;32m"
#define RED "\033[31m"
#define L_RED "\033[1;31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define L_MAGENTA "\033[1;35m"
#define L_CYAN "\033[1;96m"
#define RESET "\033[0m"

#include <string>

class ClapTrap {
 private:
 protected:
  std::string _name;
  unsigned int _hitPoints;
  unsigned int _energyPoints;
  unsigned int _attackDamage;
  unsigned int _maxHitPoints;
  unsigned int _maxEnergyPoints;

 public:
  ClapTrap(void);
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap& src);
  ClapTrap& operator=(const ClapTrap& src);

  void attack(std::string const& target);
  void takeDamage(unsigned int amount);
  void beRepaird(unsigned int amount);

  std::string getName(void) const;
  unsigned int getHitPoint(void) const;
  unsigned int getEnergyPoint(void) const;
  unsigned int getAttackDamage(void) const;

  void showStat(void) const;

  virtual ~ClapTrap(void);
};

#endif  // CLAPTRAP_HPP