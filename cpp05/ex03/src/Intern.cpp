/**
 * @file Intern.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Intern class implementation
 * @version 0.1
 * @date 2022-03-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Intern.hpp"

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void){};

Intern::Intern(Intern const &src) { *this = src; };

Intern &Intern::operator=(Intern const &src) {
  (void)src;
  return *this;
};

Form *Intern::makeShrubberyCreationForm(std::string target) {
  return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomyRequestForm(std::string target) {
  return new RobotomyRequestForm(target);
}

Form *Intern::makePresidentialPardonForm(std::string target) {
  return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string formName, std::string formTarget) {
  std::string formNameList[3] = {"shrubbery creation", "robotomy request",
                                 "presidential pardon"};
  Form *(Intern::*formMaker[3])(std::string) = {
      &Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm,
      &Intern::makePresidentialPardonForm};

  for (int idx = 0; idx < 3; idx++) {
    if (formName == formNameList[idx]) {
      Form *newForm = (this->*formMaker[idx])(formTarget);
      std::cout << YELLOW "Intern creates" RESET << " < " << *newForm << " >\n";
      return newForm;
    }
  };
  throw FormNotFoundException();
}

const char *Intern::FormNotFoundException::what(void) const throw() {
  return RED_WARN "Form not found" RESET;
}

Intern::~Intern(void){};