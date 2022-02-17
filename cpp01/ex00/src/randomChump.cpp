/**
 * @file randomChump.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief create Zombie and announce
 * @version 0.1
 * @date 2022-02-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Zombie.hpp"

void	randomChump(std::string name) {
	Zombie* zombie = new Zombie(name);
	zombie->announce();
	delete zombie;
}