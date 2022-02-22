/**
 * @file Fixed.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-21
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
	int _fixedPoint;
	static const int _fracBits = 8;

	public:
	Fixed(void);
	Fixed(int num);
	Fixed(float num);
	Fixed(const Fixed& src);
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	int toInt(void) const;
	float toFloat(void) const;

	// assign operator
	Fixed& operator = (const Fixed& src);

	// arithmetic operator
	Fixed operator + (const Fixed& src);
	Fixed operator - (const Fixed& src);
	Fixed operator * (const Fixed& src);
	Fixed operator / (const Fixed& src);

	// increment/decrement operator
	Fixed& operator ++ (void);
	Fixed& operator -- (void);
	Fixed operator ++ (int);
	Fixed operator -- (int);

	// comparision operator
	bool operator == (const Fixed& src);
	bool operator > (const Fixed& src);
	bool operator < (const Fixed& src);
	bool operator >= (const Fixed& src);
	bool operator <= (const Fixed& src);
	bool operator != (const Fixed& src);

	// static member functions
	static Fixed& min(Fixed& v1, Fixed& v2);
	static Fixed& max(Fixed& v1, Fixed& v2);
	static const Fixed& min(const Fixed& v1, const Fixed& v2);
	static const Fixed& max(const Fixed& v1, const Fixed& v2);
};

std::ostream& operator << (std::ostream& out, const Fixed& src);

#endif // FIXED_HPP