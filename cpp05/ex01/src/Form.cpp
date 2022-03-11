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

Form::Form(void)
    : _name("noName"),
      _gradeReqToSign(150),
      _gradeReqToExec(150),
      _isSigned(false) {}

Form::Form(std::string name, int gradeReqToSign, int gradeReqToExec)
    : _name(name),
      _gradeReqToSign(gradeReqToSign),
      _gradeReqToExec(gradeReqToExec),
      _isSigned(false) {
  if (gradeReqToSign < 1 || gradeReqToExec < 1)
    throw Form::GradeTooHighException();
  if (gradeReqToSign > 150 || gradeReqToExec > 150)
    throw Form::GradeTooLowException();
  std::cout << "Form <" << name << "> is contructed.\n";
}

Form &Form::operator=(Form const &src) {
  this->_isSigned = src._isSigned;
  return *this;
}

std::string Form::getName(void) const { return this->_name; }

int Form::getGradeReqToSign(void) const { return this->_gradeReqToSign; }

int Form::getGradeReqToExec(void) const { return this->_gradeReqToExec; }

bool Form::getIsSigned(void) const { return this->_isSigned; }

void Form::beSigned(Bureaucrat const &bureaucrat) {
  if (this->getGradeReqToSign() < bureaucrat.getGrade())
    throw Form::GradeTooHighException();
  this->_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw() {
  return "Form Grade is Too High";
}

const char *Form::GradeTooLowException::what() const throw() {
  return "Form Grade is Too Low";
}

Form::~Form(void) {
  std::cout << "Form <" << this->_name << "> is destructed.\n";
}

std::ostream &operator<<(std::ostream &os, Form const &src) {
  os << "Form named <" << src.getName() << "> needs grade <"
     << src.getGradeReqToSign() << "> require to sign, grade <"
     << src.getGradeReqToExec() << "> require to Execute. it's ";
  if (!src.getIsSigned()) os << "not ";
  os << "signed.";
  return os;
}
