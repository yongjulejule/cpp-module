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

std::string Form::getName(void) const { return this->_name; }

int Form::getGradeReqToSign(void) const { return this->_gradeReqToSign; }

int Form::getGradeReqToExec(void) const { return this->_gradeReqToExec; }

bool Form::getIsSigned(void) const { return this->_isSigned; }

void Form::beSigned(Bureaucrat const &bureaucrat) {
  if (this->getGradeReqToSign() >= bureaucrat.getGrade()) {
    if (this->getIsSigned())
      std::cout << "Form <" << this->getName() << "> is already signed\n";
    else {
      std::cout << "<" << bureaucrat.getName() << "> signs <" << this->getName()
                << ">\n";
      this->_isSigned = true;
    }
  } else {
    std::cout << "<" << bureaucrat.getName() << "> cannot sign <"
              << this->getName() << "> because Form grade require to sign <"
              << this->getGradeReqToSign() << "> is higher than <"
              << bureaucrat.getName() << ">'s grade <" << bureaucrat.getGrade()
              << ">\n";
  }
}
const char *Form::GradeTooHighException::what() const throw() {
  return RED_WARN "The Form Grade is Too High." RESET;
}

const char *Form::GradeTooLowException::what() const throw() {
  return RED_WARN "The Form Grade is Too Low." RESET;
}

const char *Form::ExecWithoutSignException::what() const throw() {
  return RED_WARN "Attempt Execute without Sign." RESET;
}

Form::~Form(void) {
  std::cout << "Form <" << this->_name << "> is destructed.\n";
}

std::ostream &operator<<(std::ostream &os, Form const &src) {
  os << L_GREEN "Form named <" << src.getName() << "> needs grade <"
     << src.getGradeReqToSign() << "> require to sign, grade <"
     << src.getGradeReqToExec() << "> require to Execute. it's ";
  if (!src.getIsSigned()) os << "not ";
  os << "signed." RESET;
  return os;
}