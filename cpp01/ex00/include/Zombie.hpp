/**
 * @file Zombie.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Zombie class header file
 * @copyright Copyright (c) 2022
 */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
	std::string name;
	std::string type;
	public:
	Zombie(std::string name, std::string type);
	~Zombie();
	void announce();
};

#endif