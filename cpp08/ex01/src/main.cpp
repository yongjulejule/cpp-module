/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief main to test span class
 * @version 0.1
 * @date 2022-03-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <algorithm>

#include "span.hpp"
#define NBR_ELEMENTS 30

void testSubject(void) {
  Span sp = Span(5);
  sp.addNumber(5);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  sp.printElements();
  std::cout << "shortestSpan :" << sp.shortestSpan() << std::endl;
  std::cout << "longestSpan  :" << sp.longestSpan() << std::endl;
}

void testMy(void) {
  Span sp(NBR_ELEMENTS);
  sp.addNumber(42424242);

  std::cout << "!!put numbers based on vector iterator!!\n";
  std::vector<int> v;
  v.insert(v.begin(), NBR_ELEMENTS - 1, 0);
  sp.addNumber(v.begin(), v.end());
  sp.printElements();

  std::cout << "\n\n==============================\n\n";
  std::cout << "!!fill random numbers based on range(-4242, 4242)!!\n";
  std::pair<int, int> range(-4242, 4242);
  sp.fillNumberInRange(sp.begin() + 1, sp.end(), range);
  sp.printElements();

  std::cout << "shortestSpan :" << sp.shortestSpan() << std::endl;
  std::cout << "longestSpan  :" << sp.longestSpan() << std::endl;

  std::cout << "\n\n==============================\n\n";
  std::cout << "!!fill random numbers based on range(0, 424242)!!\n";
  std::pair<int, int> range2(0, 424242);
  sp.fillNumberInRange(sp.begin(), sp.end(), range2);
  sp.printElements();
  std::cout << "shortestSpan :" << sp.shortestSpan() << std::endl;
  std::cout << "longestSpan  :" << sp.longestSpan() << std::endl;
  std::cout << "\n\n=========== EXCEPTION TESTS ===================\n\n";
  try {
    std::cout << "exception : add single number when span is already full\n";
    sp.addNumber(42);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::cout
        << "exception : add numbers based iterator when span is already full\n";
    sp.addNumber(v.begin(), v.end());
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    Span spe(10);
    std::cout << "shortestSpan :" << spe.shortestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    Span spe(10);
    std::cout << "longestSpan :" << spe.longestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

int main(void) {
  std::cout << "============ IN SUBJECT ============" << std::endl;
  testSubject();
  std::cout << "============ MY TEST ============" << std::endl;
  testMy();
  return 0;
}