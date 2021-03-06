/**
 * @file Form.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Form class declaration
 * @version 0.1
 * @date 2022-02-28
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form {
 private:
  const std::string _name;
  const int _gradeReqToSign;
  const int _gradeReqToExec;
  bool _isSigned;

 public:
  Form(void);
  Form(std::string name, int gradeReqToSign, int gradeReqToExec);
  Form(Form const &src);
  Form &operator=(Form const &src);

  class GradeTooHighException : public std::exception {
   public:
    const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
   public:
    const char *what() const throw();
  };

  std::string getName(void) const;
  int getGradeReqToSign(void) const;
  int getGradeReqToExec(void) const;
  bool getIsSigned(void) const;

  void beSigned(Bureaucrat const &bureaucrat);

  ~Form(void);
};

std::ostream &operator<<(std::ostream &os, Form const &src);

#endif  // FORM_HPP