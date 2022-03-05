/**
 * @file mutantstack.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief MutantStack class which is iterable stack declaration
 * @version 0.1
 * @date 2022-03-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
  typedef typename std::stack<T>::container_type::iterator iterator;
  typedef
      typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
  typedef typename std::stack<T>::container_type::const_iterator const_iterator;
  typedef typename std::stack<T>::container_type::const_reverse_iterator
      const_reverse_iterator;

  MutantStack(void);
  MutantStack(const MutantStack &rhs);
  MutantStack &operator=(const MutantStack &rhs);

  iterator begin(void);
  iterator end(void);
  const const_iterator cbegin(void);
  const const_iterator cend(void);
  reverse_iterator rbegin(void);
  reverse_iterator rend(void);
  const const_reverse_iterator crbegin(void);
  const const_reverse_iterator crend(void);
  ~MutantStack(void);
};

template <typename T>
MutantStack<T>::MutantStack(void) {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &rhs) {
  *this = rhs;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &rhs) {
  this->c = rhs.c;
  return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) {
  return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void) {
  return this->c.end();
}

template <typename T>
const typename MutantStack<T>::const_iterator MutantStack<T>::cbegin(void) {
  return this->c.begin();
}

template <typename T>
const typename MutantStack<T>::const_iterator MutantStack<T>::cend(void) {
  return this->c.end();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(void) {
  return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(void) {
  return this->c.rend();
}

template <typename T>
const typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin(
    void) {
  return this->c.rbegin();
}

template <typename T>
const typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend(
    void) {
  return this->c.rend();
}

template <typename T>
MutantStack<T>::~MutantStack(void) {}

#endif  // MUTANTSTACK_HPP