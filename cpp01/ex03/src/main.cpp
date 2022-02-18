/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Unnecessary violence
 * @version 0.1
 * @date 2022-02-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}