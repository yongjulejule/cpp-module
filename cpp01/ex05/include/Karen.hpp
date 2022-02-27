/**
 * @file Karen.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Karen class declaration
 * @version 0.1
 * @date 2022-02-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>

class Karen {
 private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);

 public:
  Karen(void);
  Karen(const Karen& src);
  ~Karen(void);
  void complain(std::string level);
};

#endif  // KAREN_HPP