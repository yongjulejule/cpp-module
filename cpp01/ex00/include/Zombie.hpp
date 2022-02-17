/**
 * @file Zombie.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Zombie class declaration
 * @version 0.1
 * @date 2022-02-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
	std::string _name;
	public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};

#endif //ZOMBIE_HPP