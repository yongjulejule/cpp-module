/**
 * @file Bureaucrat.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Bureaucrat class implementation
 * @version 0.1
 * @date 2022-02-28
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Bureaucrat.hpp"

#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : _name("noName"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
  if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
  else if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
  this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
    : _name(src._name), _grade(src._grade) {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src) {
  this->_grade = src._grade;
  return *this;
}

const std::string Bureaucrat::getName(void) const { return this->_name; }

int Bureaucrat::getGrade(void) const { return this->_grade; }

void Bureaucrat::incrementGrade(void) {
  if (this->getGrade() > 1)
    this->_grade -= 1;
  else
    throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void) {
  if (this->getGrade() < 150)
    this->_grade += 1;
  else
    throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::executeForm(Form const &form) {
  try {
    form.execute(*this);
    std::cout << "<" << this->getName() << "> executes <" << form.getName()
              << ">.\n";
  } catch (std::exception &e) {
    std::cout << "<" << this->getName() << "> cannot executes the form <"
              << form.getName() << ">. Because " << e.what() << std::endl;
  }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "Bureaucrat Grade is Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "Bureaucrat Grade is Too Low";
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &src) {
  os << "<" << src.getName() << ">, bureaucrat grade <" << src.getGrade()
     << ">.";
  return os;
}

Bureaucrat::~Bureaucrat(void) {
  std::cout << "destructing <" << this->_name << ">.\n";
}