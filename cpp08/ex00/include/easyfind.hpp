/**
 * @file easyfind.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief easyFind template function
 * @version 0.1
 * @date 2022-03-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>

class FailToFindException : public std::exception {
  const char *what() const throw() { return "Fail to find in container"; }
};

template <typename T>
typename T::iterator easyfind(T &container, int val) {
  typename T::iterator res = std::find(container.begin(), container.end(), val);
  if (res == container.end()) throw FailToFindException();
  return res;
}

#endif  // EASYFIND_HPP