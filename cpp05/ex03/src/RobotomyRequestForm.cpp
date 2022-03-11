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

#include <sys/time.h>

#include <cstdlib>

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

int generateRandomNumber(int start, int end) {
  static bool first = true;
  if (first) {
    struct timeval tp;
    gettimeofday(&tp, NULL);
    srand(tp.tv_usec);
    rand();
    first = false;
  }
  return ((static_cast<float>(rand())) / RAND_MAX) *
         (static_cast<long long>(end) - start + 1);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
  if (!this->getIsSigned()) throw Form::ExecWithoutSignException();
  if (executor.getGrade() > this->getGradeReqToExec())
    throw Form::GradeTooHighException();
  std::cout << YELLOW
      "\nDRILLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL"
      "LLLLLLLLLLLLLLLLLLLLLL...\n\n";
  if (generateRandomNumber(1, 100) & 1)
    std::cout << L_CYAN "<" << this->_target
              << "> has been successfully robotomized.\n" RESET;
  else
    std::cout << MAGENTA "<" << this->_target
              << "> fail to robotomized. Try Again HAHA! \n" RESET;
  std::cout << "<" << this->_target << "> is executed!\n";
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
  std::cout << "RobotomyRequestForm for <" << this->_target
            << "> is destructed.\n";
}