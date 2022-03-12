/**
 * @file Array.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Array template class
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array {
 private:
  unsigned int _size;
  T *_arr;

 public:
  Array<T>(void) : _size(0), _arr(new T[0]){};
  Array<T>(unsigned int n) : _size(n), _arr(new T[n]){};
  Array(const Array &src) : _size(0), _arr(NULL) { *this = src; };

  Array &operator=(const Array &src) {
    if (this->_arr) delete[] this->_arr;
    const unsigned int srcSize = src.getSize();
    this->_arr = new T[src._size];
    for (unsigned int idx = 0; idx < srcSize; idx++) {
      this->_arr[idx] = src._arr[idx];
    }
    this->_size = src._size;
    return *this;
  };

  T &operator[](const unsigned int idx) {
    if (idx >= this->_size) throw Array<T>::OutOfRangeException();
    return this->_arr[idx];
  };

  unsigned int getSize(void) const { return this->_size; };
  class OutOfRangeException : public std::exception {
    const char *what() const throw() { return "Array: Index is out of range."; }
  };

  ~Array(void) {
    if (this->_arr) delete[] this->_arr;
  };
};

#endif  // ARRAY_HPP