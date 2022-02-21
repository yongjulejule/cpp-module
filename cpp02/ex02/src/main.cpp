/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	Fixed e = a + b;
	std::cout << "e : " << e << std::endl;

	// std::cout << "a + b : " << (a + b) << std::endl;
	// std::cout << "a - b : " << (a - b) << std::endl;
	// std::cout << "a * b : " << (a * b) << std::endl;
	// std::cout << "a / b : " << (a / b) << std::endl;

	const Fixed big = Fixed::max(c, b);
	// Fixed small = Fixed::min(c, b);

	std::cout << "max(a, b) : " << big << std::endl;
	// std::cout << "min(a, b) : " << small << std::endl;

	std::cout << "a > b : " << (a > b) << std::endl;
	std::cout << "a < b : " << (a < b) << std::endl;
	std::cout << "a >= b : " << (a >= b) << std::endl;
	std::cout << "a <= b : " << (a <= b) << std::endl;
	std::cout << "a == b : " << (a == b) << std::endl;
	std::cout << "a != b : " << (a != b) << std::endl;
	std::cout << "a is " << a.toFloat() << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}