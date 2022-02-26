/**
 * @file IMateriaSource.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief  Interface class IMateriaSource declaration
 * @version 0.1
 * @date 2022-02-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>

#include "AMateria.hpp"

class IMateriaSource {
 public:
  virtual ~IMateriaSource(){};
  virtual void learnMateria(AMateria*) = 0;
  virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif  // IMATERIASOURCE_HPP