/**
 * @file Brain.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Brain class declaration
 * @version 0.1
 * @date 2022-02-24
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
 private:
  std::string _ideas[100];

 public:
  Brain(void);
  Brain(const Brain& src);

  Brain& operator=(const Brain& src);

  std::string* getIdeas(void);

  ~Brain(void);
};

#endif  // BRAIN_HPP