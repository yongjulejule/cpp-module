/**
 * @file Form.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Form class implementation
 * @version 0.1
 * @date 2022-02-28
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Form.hpp"

#include "Bureaucrat.hpp"

Form::Form(std::string name, int gradeReqToSign, int gradeReqToExec,
           bool isSigned)
    : _name(name),
      _gradeReqToSign(gradeReqToSign),
      _gradeReqToExec(gradeReqToExec),
      _isSigned(isSigned) {
  if (gradeReqToSign < 1 || gradeReqToExec < 1)
    throw Form::GradeTooHighException();
  if (gradeReqToSign > 150 || gradeReqToExec > 150)
    throw Form::GradeTooLowException();
  std::cout << "Form <" << name << "> is contructed.\n";
}

const std::string Form::getName(void) const { return this->_name; }

const int Form::getGradeReqToSign(void) const { return this->_gradeReqToSign; }

const int Form::getGradeReqToSign(void) const { return this->_gradeReqToSign; }

const bool Form::getIsSigned(void) const { return this->_isSigned; }

void Form::beSigned(Bureaucrat const& bureaucrat) {
  if (this->getGradeReqToSign() <= bureaucrat.getGrade()) {
    std::cout << "<" << bureaucrat.getName() << "> signs <" << this->getName()
              << ">\n";
  } else {
    std::cout << "<" << bureaucrat.getName() << "cannot sign <"
              << this->getName() << "> because <Form grade require to sign "
              << this->getGradeReqToSign() << " is higher than "
              << bureaucrat.getGrade() << std::endl;
  }
}

Form::~Form(void) {
  std::cout << "Form <" << this->_name << "> is destructed.\n";
}