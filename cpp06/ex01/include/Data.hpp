/**
 * @file Data.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Data structure declaration
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef DATA_HPP
#define DATA_HPP

struct Data {
  int price;
  char *name;
  Data(void);
  ~Data(void);
};

#endif  // DATA_HPP