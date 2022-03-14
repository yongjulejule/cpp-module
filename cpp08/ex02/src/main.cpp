/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief main for test MutantStack
 * @version 0.1
 * @date 2022-03-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <algorithm>
#include <iostream>

#include "mutantstack.hpp"

void myMutantStackTest(int argc, char **argv) {
  MutantStack<std::string> args;
  for (int i = 0; i < argc; i++) {
    args.push(argv[i]);
  }
  {
    std::cout << "iterator test" << std::endl;
    MutantStack<std::string>::iterator it = args.begin();
    MutantStack<std::string>::iterator ite = args.end();
    ++it;
    --it;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
  }
  {
    std::cout << "reverse_iterator test" << std::endl;
    MutantStack<std::string>::reverse_iterator it = args.rbegin();
    MutantStack<std::string>::reverse_iterator ite = args.rend();
    ++it;
    --it;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
  }
  {
    std::cout << "const_iterator test" << std::endl;
    MutantStack<std::string>::const_iterator it = args.cbegin();
    MutantStack<std::string>::const_iterator ite = args.cend();
    ++it;
    --it;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
  }
  {
    std::cout << "const_reverse_iterator test" << std::endl;
    MutantStack<std::string>::const_reverse_iterator it = args.crbegin();
    MutantStack<std::string>::const_reverse_iterator ite = args.crend();
    ++it;
    --it;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
  }
}

void subjectStackTest(void) {
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  std::cout << "=========================\n";
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  //[...]
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);
}

void canonicalTest(void) {
  MutantStack<int> mstack;
  for (int i = 0; i < 10; i++) mstack.push(42 + i);
  MutantStack<int> mstackCopy(mstack);
  mstack.push(5252);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  while (it != ite) {
    std::cout << *it << ", ";
    ++it;
  }
  std::cout << std::endl;
  MutantStack<int>::iterator itc = mstackCopy.begin();
  MutantStack<int>::iterator itec = mstackCopy.end();
  while (itc != itec) {
    std::cout << *itc << ", ";
    ++itc;
  }
  std::cout << std::endl;
}

int main(int argc, char **argv) {
  std::cout << "========== TEST IN SUBJECT ==========\n";
  subjectStackTest();

  std::cout << "\n========== MY TEST ==========\n\n";
  std::cout << "======== ITERATORS =========\n";
  myMutantStackTest(argc, argv);
  std::cout << "======= CANONICAL FORM ==========\n";
  canonicalTest();
  return 0;
}