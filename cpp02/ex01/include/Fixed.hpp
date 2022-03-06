/**
 * @file Fixed.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Fixed class declaration
 * @version 0.1
 * @date 2022-02-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
 private:
  int _fixedPoint;
  static const int _fracBits = 8;

 public:
  Fixed(void);
  Fixed(int num);
  Fixed(float num);
  Fixed(const Fixed& src);

  Fixed& operator=(const Fixed& src);

  int getRawBits(void) const;
  void setRawBits(int const raw);

  int toInt(void) const;
  float toFloat(void) const;

  ~Fixed(void);
};

std::ostream& operator<<(std::ostream& out, const Fixed& src);

#endif  // FIXED_HPP