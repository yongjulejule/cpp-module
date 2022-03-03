/**
 * @file iter.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief iter template class
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T *array, unsigned long long size, void (*f)(T)) {
  for (unsigned long long i = 0; i < size; i++) {
    f(array[i]);
  }
}

#endif  // ITER_HPP