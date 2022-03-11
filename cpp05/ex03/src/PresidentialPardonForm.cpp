/**
 * @file PresidentialPardonForm.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief PresidentialPardonForm class derived Form Abstract class
 * implementation
 * @version 0.1
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "PresidentialPardonForm.hpp"

#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form("PresidentialPardonForm", 25, 5), _target(target) {
  std::cout << "PresidentialPardonForm for <" << target << "> is contructed.\n";
}

PresidentialPardonForm::PresidentialPardonForm(
    PresidentialPardonForm const &src)
    : Form("PresidentialPardonForm", 25, 5), _target(src._target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(
    PresidentialPardonForm const &src) {
  this->_target = src._target;
  return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
  if (!this->getIsSigned()) throw Form::ExecWithoutSignException();
  if (executor.getGrade() > this->getGradeReqToExec())
    throw Form::GradeTooHighException();
  std::cout << BLUE "Tells us <" << this->_target
            << " > has been pardoned by Zafod Beeblebrox.\n" RESET;
  std::cout << L_CYAN "<" << this->_target << "> is executed!\n" RESET;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
  std::cout << "PresidentialPardonForm for <" << this->_target
            << "> is destructed.\n";
}