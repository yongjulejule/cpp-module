/**
 * @file HumanB.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief class HumanB
 * @version 0.1
 * @date 2022-02-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
	std::string _name;
	Weapon _weapon;

	public:
	HumanB(std::string name);
	HumanB(const HumanB& src);
	~HumanB(void);
	void attack(void) const;
	void setWeapon(Weapon& weapon);
};

#endif // HUMANB_HPP