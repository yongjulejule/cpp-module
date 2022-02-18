/**
 * @file HumanA.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief class HumanA
 * @version 0.1
 * @date 2022-02-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
	std::string _name;
	Weapon& _weapon;

	public:
	HumanA(std::string name, Weapon& weapon);
	HumanA(const HumanA& src);
	~HumanA(void);
	void attack(void) const;
};

#endif // HUMANA_HPP