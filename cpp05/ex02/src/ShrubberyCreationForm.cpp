/**
 * @file ShrubberyCreationForm.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief ShrubberyCreationForm class derived Form Abstract class implementation
 * @version 0.1
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "ShrubberyCreationForm.hpp"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form("ShrubberyCreationForm", 145, 137), _target(target) {
  std::cout << "ShrubberyCreationForm for <" << target << "> is contructed.\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
    : Form("ShrubberyCreationForm", 145, 137), _target(src._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(
    ShrubberyCreationForm const &src) {
  this->_target = src._target;
  return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) {
  this->beSigned(executor);
  if (!this->getIsSigned()) {
    std::cout << "Cannot execute ShrubberyCreationForm for <" << this->_target
              << "> : ";
    throw Form::GradeTooLowException();
  }
  std::ofstream out;
  out.exceptions(std::ios::badbit | std::ios::failbit);
  out.open(this->_target + "_shrubbery", std::ios::out);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
  std::cout << "ShrubberyCreationForm for <" << this->_target
            << "> is destructed.\n";
}