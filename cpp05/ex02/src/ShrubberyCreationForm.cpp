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

#include "Bureaucrat.hpp"

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

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
  if (executor.getGrade() > this->getGradeReqToExec())
    throw Form::GradeTooHighException();
  if (!this->getIsSigned()) throw Form::ExecWithoutSignException();
  std::ofstream out;
  out.exceptions(std::ios::badbit | std::ios::failbit);
  out.open(this->_target + "_shrubbery", std::ios::out | std::ios::trunc);
  out << ASCII_TREE;
  std::cout << L_CYAN "<" << this->_target << "> is executed!\n" RESET;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
  std::cout << "ShrubberyCreationForm for <" << this->_target
            << "> is destructed.\n";
}