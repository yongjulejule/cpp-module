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
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void testShrubberyCreationForm(void) {
  std::cout << "===============NORMAL CASE===========================\n";
  try {
    Form *test = new ShrubberyCreationForm("APPLE");
    std::cout << *test << std::endl;
    Bureaucrat me("jule", 6);
    me.signForm(*test);
    std::cout << *test << std::endl;
    me.executeForm(*test);
    delete test;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout
      << "===============EXECUTE WITHOUT SIGN===========================\n";
  try {
    Form *test = new ShrubberyCreationForm("Heaven");
    Bureaucrat me("angel", 137);
    std::cout << *test << std::endl;
    std::cout << me << std::endl;
    me.executeForm(*test);
    me.signForm(*test);
    me.incrementGrade();
    std::cout << me << std::endl;
    std::cout << *test << std::endl;
    me.executeForm(*test);
    delete test;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "===============EXECUTE WITHOUT ENOUGH "
               "GRADE===========================\n";
  try {
    Form *test = new ShrubberyCreationForm("HELL");
    Bureaucrat me("Daemon", 146);
    std::cout << *test << std::endl;
    std::cout << me << std::endl;
    me.signForm(*test);
    me.incrementGrade();
    std::cout << me << std::endl;
    std::cout << *test << std::endl;
    me.executeForm(*test);
    delete test;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

void testRobotomyRequestForm(void) {
  std::cout << "===============NORMAL CASE===========================\n";
  try {
    Form *test = new RobotomyRequestForm("APPLE");
    std::cout << *test << std::endl;
    Bureaucrat me("jule", 6);
    std::cout << me << std::endl;
    me.signForm(*test);
    me.incrementGrade();
    std::cout << me << std::endl;
    me.signForm(*test);
    std::cout << *test << std::endl;
    me.executeForm(*test);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout
      << "===============EXECUTE WITHOUT SIGN===========================\n";
  try {
    Form *test = new RobotomyRequestForm("Heaven");
    Bureaucrat me("angel", 46);
    std::cout << *test << std::endl;
    std::cout << me << std::endl;
    me.executeForm(*test);
    me.signForm(*test);
    me.incrementGrade();
    std::cout << me << std::endl;
    me.signForm(*test);
    std::cout << *test << std::endl;
    me.executeForm(*test);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "===============EXECUTE WITHOUT ENOUGH "
               "GRADE===========================\n";
  try {
    Form *test = new RobotomyRequestForm("HELL");
    Bureaucrat me("Daemon", 73);
    std::cout << *test << std::endl;
    std::cout << me << std::endl;
    me.signForm(*test);
    me.incrementGrade();
    std::cout << me << std::endl;
    me.signForm(*test);
    std::cout << *test << std::endl;
    me.executeForm(*test);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

void testPresidentialPardonForm(void) {
  std::cout << "===============NORMAL CASE===========================\n";
  try {
    Form *test = new PresidentialPardonForm("APPLE");
    std::cout << *test << std::endl;
    Bureaucrat me("jule", 6);
    std::cout << me << std::endl;
    me.signForm(*test);
    me.incrementGrade();
    std::cout << me << std::endl;
    me.signForm(*test);
    std::cout << *test << std::endl;
    me.executeForm(*test);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout
      << "===============EXECUTE WITHOUT SIGN===========================\n";
  try {
    Form *test = new PresidentialPardonForm("Heaven");
    Bureaucrat me("angel", 137);
    std::cout << *test << std::endl;
    std::cout << me << std::endl;
    me.executeForm(*test);
    me.signForm(*test);
    me.incrementGrade();
    std::cout << me << std::endl;
    me.signForm(*test);
    std::cout << *test << std::endl;
    me.executeForm(*test);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "===============EXECUTE WITHOUT ENOUGH "
               "GRADE===========================\n";
  try {
    Form *test = new PresidentialPardonForm("HELL");
    Bureaucrat me("Daemon", 146);
    std::cout << *test << std::endl;
    std::cout << me << std::endl;
    me.signForm(*test);
    me.incrementGrade();
    std::cout << me << std::endl;
    me.signForm(*test);
    std::cout << *test << std::endl;
    me.executeForm(*test);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

int main(void) {
  std::cout << RED "\n\n\n!!ShrubberyCreationForm TEST!!\n\n\n" RESET;
  testShrubberyCreationForm();
  std::cout << RED "\n\n\n!!RobotomyRequestForm TEST!!\n\n\n" RESET;
  testRobotomyRequestForm();
  std::cout << RED "\n\n\n!!PresidentialPardonForm TEST!!\n\n\n" RESET;
  testPresidentialPardonForm();
}