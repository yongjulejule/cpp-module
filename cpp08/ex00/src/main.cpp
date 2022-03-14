/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief test main for my easyFind
 * @version 0.1
 * @date 2022-03-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <algorithm>
#include <deque>
#include <iostream>
#include <list>
#include <string>
#include <vector>

#include "easyfind.hpp"

template <typename T>
void print(const T &t) {
  std::cout << t << ",";
}

void testVector(void) {
  std::vector<int> v;
  for (int i = 0; i < 10; i++) {
    v.push_back(i);
  }
  std::for_each(v.begin(), v.end(), print<int>);
  std::cout << std::endl;
  try {
    std::vector<int>::iterator test = easyfind<std::vector<int> >(v, 3);
    std::cout << *test << std::endl;
    test = easyfind<std::vector<int> >(v, 5);
    std::cout << *test << std::endl;
    test = easyfind<std::vector<int> >(v, 23);
    std::cout << *test << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

void testList(int argc, char **argv) {
  std::list<int> l;
  for (int i = 0; i < argc; i++) {
    l.push_back(static_cast<int>(argv[i][0]));
  }
  std::for_each(l.begin(), l.end(), print<int>);
  std::cout << std::endl;

  try {
    std::list<int>::iterator test = easyfind<std::list<int> >(l, 'a');
    std::cout << *test << " at idx " << std::distance(l.begin(), test)
              << std::endl;
    test = easyfind<std::list<int> >(l, 'b');
    std::cout << *test << " at idx " << std::distance(l.begin(), test)
              << std::endl;
    test = easyfind<std::list<int> >(l, 'c');
    std::cout << *test << " at idx " << std::distance(l.begin(), test)
              << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

void testDeque(void) {
  std::deque<int> d;
  for (int i = 0; i < 10; i++) {
    if (i & 1)
      d.push_back(i);
    else
      d.push_front(i);
  }
  std::for_each(d.begin(), d.end(), print<int>);
  std::cout << std::endl;
  try {
    std::deque<int>::iterator test = easyfind<std::deque<int> >(d, 2);
    std::cout << *test << " at idx " << std::distance(d.begin(), test)
              << std::endl;
    test = easyfind<std::deque<int> >(d, 7);
    std::cout << *test << " at idx " << std::distance(d.begin(), test)
              << std::endl;
    test = easyfind<std::deque<int> >(d, 42);
    std::cout << *test << " at idx " << std::distance(d.begin(), test)
              << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

int main(int argc, char **argv) {
  std::cout << "=========== VECTOR ===========" << std::endl;
  testVector();
  std::cout << "=========== LIST ===========" << std::endl;
  testList(argc, argv);
  std::cout << "=========== DEQUE ===========" << std::endl;
  testDeque();
  return 0;
}
