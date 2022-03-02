/**
 * @file RobotomyRequestForm.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief RoboTomyRequestForm class derived from Abstract Form class
 * 				implementation
 * @version 0.1
 * @date 2022-03-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "RobotomyRequestForm.hpp"

#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form("RobotomyRequestForm", 72, 45), _target(target) {
  std::cout << "RobotomyRequestForm for <" << target << "> is contructed.\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
    : Form("RobotomyRequestForm", 72, 45), _target(src._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(
    RobotomyRequestForm const &src) {
  this->_target = src._target;
  return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
  if (executor.getGrade() > this->getGradeReqToExec())
    throw Form::GradeTooHighException();
  if (!this->getIsSigned()) throw Form::ExecWithoutSignException();
  std::cout << YELLOW
      "\nDRILLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL"
      "LLLLLLLLLLLLLLLLLLLLLL...\n\n";
  std::cout << L_CYAN "<" << this->_target
            << "> has been robotomized 50% of the time.\n" RESET;
  std::cout << "<" << this->_target << "> is executed!\n";
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
  std::cout << "RobotomyRequestForm for <" << this->_target
            << "> is destructed.\n";
}