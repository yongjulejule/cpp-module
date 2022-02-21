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
	const Fixed& operator = (const Fixed& src);
	const Fixed operator + (const Fixed& src);
	const Fixed operator - (const Fixed& src);
	const Fixed operator * (const Fixed& src);
	const Fixed operator / (const Fixed& src);
	const Fixed& operator ++ (void);
	const Fixed& operator -- (void);
	const Fixed operator ++ (int);
	const Fixed operator -- (int);
	bool operator == (const Fixed& src);
	bool operator > (const Fixed& src);
	bool operator < (const Fixed& src);
	bool operator >= (const Fixed& src);
	bool operator <= (const Fixed& src);
	bool operator != (const Fixed& src);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	int toInt(void) const;
	float toFloat(void) const;

	// static Fixed& min(Fixed& v1, Fixed& v2);
	// static Fixed& max(Fixed& v1, Fixed& v2);
	// static const Fixed& min(const Fixed& v1, const Fixed& v2);
	static const Fixed& max(const Fixed& v1, const Fixed& v2);
};

std::ostream& operator << (std::ostream& out, const Fixed& src);

#endif // FIXED_HPP