/**
 * @file main.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief  I want to be a bureaucrat!
 * @version 0.1
 * @date 2022-02-28
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
  try {
    Form *test = new ShrubberyCreationForm("APPLE");
    std::cout << test << std::endl;
    Bureaucrat me("jule", 6);
    std::cout << me << std::endl;
    test->beSigned(me);
    me.incrementGrade();
    std::cout << me << std::endl;
    test->beSigned(me);
    std::cout << test << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "==========================================\n";
}