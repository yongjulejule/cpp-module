/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief main for ex00
 * @version 0.1
 * @date 2022-02-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Zombie.hpp"

int main(void) {
	Zombie* zombie = new Zombie("jiskim");
	zombie->announce();
	delete zombie;
	Zombie* a = new Zombie("jisukim");
	a->announce();
	delete a;
	Zombie* b = new Zombie("kim ji su");
	b->announce();
	delete b;
	Zombie* c = new Zombie("GOSUJISU");
	c->announce();
	delete c;
	return 0;
}