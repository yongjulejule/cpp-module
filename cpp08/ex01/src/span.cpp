/**
 * @file span.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief span class implementation
 * @version 0.1
 * @date 2022-03-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "span.hpp"

#include <sys/time.h>

#include <algorithm>

Span::Span(void) : _size(0), _v() {}

Span::Span(unsigned int size) : _size(size), _v() {}

Span::Span(const Span &rhs) { *this = rhs; }

Span &Span::operator=(const Span &rhs) {
  if (this != &rhs) {
    this->_v.clear();
    this->_size = rhs._size;
    this->_v = rhs._v;
  }
  return *this;
}

const char *Span::NotEnoughStorageException::what(void) const throw() {
  return "Not enough storage.";
}

const char *Span::NotEnoughtElementsException::what(void) const throw() {
  return "Not enough elements to get span.";
}

void Span::addNumber(int number) {
  if (this->_v.size() >= this->_size) throw Span::NotEnoughStorageException();
  this->_v.push_back(number);
}

Span::iterator Span::begin(void) { return this->_v.begin(); }
Span::iterator Span::end(void) { return this->_v.end(); }

int Span::shortestSpan(void) {
  if (this->_size < 2) throw Span::NotEnoughtElementsException();
  std::vector<int> sortedV = this->_v;
  std::sort(sortedV.begin(), sortedV.end());
  int ret = abs(sortedV[1] - sortedV[0]);
  for (unsigned int i = 1; i < this->_size - 1; i++) {
    const int tmp = abs(sortedV[i + 1] - sortedV[i]);
    if (tmp < ret) ret = tmp;
  }
  return ret;
}

int Span::longestSpan(void) {
  if (this->_size < 2) throw Span::NotEnoughtElementsException();

  Span::iterator begin = this->begin();
  Span::iterator end = this->end();
  return abs(*std::max_element(begin, end) - *std::min_element(begin, end));
}

int generateRandomNumber(std::pair<int, int> range) {
  static bool first = true;
  if (first) {
    struct timeval tp;
    gettimeofday(&tp, NULL);
    srand(tp.tv_usec);
    rand();
    first = false;
  }
  return ((static_cast<float>(rand())) / RAND_MAX) *
         (static_cast<long long>(range.second) - range.first + 1);
}

void Span::fillNumberInRange(Span::iterator begin, Span::iterator end,
                             std::pair<int, int> range) {
  for (Span::iterator it = begin; it != end; it++) {
    *it = generateRandomNumber(range);
  }
}

void Span::printElements(void) {
  std::cout << "Elements: ";
  for (Span::iterator it = this->begin(); it != this->end(); it++) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}

Span::~Span(void) { this->_v.clear(); }
