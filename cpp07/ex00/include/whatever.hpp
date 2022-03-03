/**
 * @file whatever.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief template function swap, min, max
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

template <typename T>
void swap(T &a, T &b) {
  T tmp = a;
  a = b;
  b = tmp;
}

template <typename T>
T min(T a, T b) {
  return (a < b) ? a : b;
}

template <typename T>
T max(T a, T b) {
  return (a > b) ? a : b;
}