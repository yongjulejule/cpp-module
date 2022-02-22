/**
 * @file Fixed.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief class Fixed definition
 * @version 0.1
 * @date 2022-02-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
 private:
  int _fixedPoint;
  static const int _fracBits = 8;

 public:
  Fixed(void);
  Fixed(const Fixed& src);
  ~Fixed(void);

  // assign operator
  const Fixed& operator=(const Fixed& src);

  int getRawBits(void) const;
  void setRawBits(int const raw);
};

#endif  // FIXED_HPP