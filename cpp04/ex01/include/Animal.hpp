/**
 * @file Animal.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Animal class declaration
 * @version 0.1
 * @date 2022-02-24
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
class Brain;

class Animal {
 protected:
  std::string _type;

 public:
  Animal(void);
  Animal(const Animal& src);
  Animal& operator=(const Animal& src);

  std::string getType(void) const;
  virtual void makeSound(void) const;

  virtual ~Animal(void);
};

#endif  // ANIMAL_HPP