/**
 * @file Cat.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Cat class derive Animal declaration
 * @version 0.1
 * @date 2022-02-24
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
 public:
  Cat(void);
  Cat(const Cat& src);
  Cat& operator=(const Cat& src);

  void makeSound(void) const;
  virtual ~Cat(void);
};

#endif  // CAT_HPP