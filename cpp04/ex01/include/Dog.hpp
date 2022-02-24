/**
 * @file Dog.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Dog class derived Animal declaration
 * @version 0.1
 * @date 2022-02-24
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 private:
  Brain* _brain;

 public:
  Dog(void);
  Dog(const Dog& src);
  Dog& operator=(const Dog& src);

  Brain* getBrains(void) const;

  void makeSound(void) const;
  ~Dog(void);
};

#endif  // DOG_HPP