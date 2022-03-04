/**
 * @file span.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Span class declaration
 * @version 0.1
 * @date 2022-03-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <utility>
#include <vector>

class Span {
 private:
  unsigned int _size;
  std::vector<int> _v;

 public:
  Span(void);
  Span(unsigned int size);
  Span(const Span &rhs);

  Span &operator=(const Span &rhs);

  typedef std::vector<int>::iterator iterator;

  void addNumber(int number);
  int shortestSpan(void);
  int longestSpan(void);

  void fillNumberInRange(Span::iterator begin, Span::iterator end,
                         std::pair<int, int> range);

  iterator begin(void);
  iterator end(void);

  void printElements(void);

  class NotEnoughStorageException : public std::exception {
    const char *what() const throw();
  };

  class NotEnoughtElementsException : public std::exception {
    const char *what() const throw();
  };

  ~Span(void);
};

#endif  // SPAN_HPP