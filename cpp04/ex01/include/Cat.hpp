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
#include "Brain.hpp"

class Cat : public Animal {
 private:
  Brain* _brain;

 public:
  Cat(void);
  Cat(const Cat& src);
  Cat& operator=(const Cat& src);

  void printBrain(void) const;
  void makeSound(void) const;

  virtual ~Cat(void);
};

#endif  // CAT_HPP