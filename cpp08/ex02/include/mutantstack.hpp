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
  struct iterator {
    typedef std::bidirectional_iterator_tag iterator_category;
    typedef T value_type;
    typedef T *pointer;
    typedef T &reference;
    typedef std::ptrdiff_t difference_type;

   private:
    pointer _it;

   public:
    iterator(void) : _it(NULL) {}
    iterator(const iterator &rhs) : _it(rhs._it) {}
    iterator &operator=(const iterator &rhs) {
      this->_it = rhs._it;
      return *this;
    }
    iterator &operator++(void) {
      ++this->_it;
      return *this;
    }
    iterator operator++(int) {
      iterator tmp(*this);
      ++(*this);
      return tmp;
    }
    iterator &operator--(void) {
      --this->_it;
      return *this;
    }
    iterator operator--(int) {
      iterator tmp(*this);
      --(*this);
      return tmp;
    }
    bool operator==(const iterator &rhs) const {
      return (this->_it == rhs._it);
    }
    bool operator!=(const iterator &rhs) const { return !(*this == rhs); }
    reference operator*(void) const { return (*this->_it); }
    pointer operator->(void) const { return (this->_it); }
    ~iterator(void){};
  };

  MutantStack(void);
  MutantStack(const MutantStack &rhs);
  MutantStack &operator=(const MutantStack &rhs);

  iterator begin(void);
  iterator end(void);
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
MutantStack<T>::~MutantStack(void) {}

#endif  // MUTANTSTACK_HPP