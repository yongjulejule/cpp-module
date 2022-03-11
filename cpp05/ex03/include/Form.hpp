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

#define YELLOW "\033[93m"
#define BLUE "\033[94m"
#define GREEN "\033[32m"
#define L_GREEN "\033[1;32m"
#define RED "\033[31m"
#define RED_WARN "\033[1;3;31m"
#define L_RED "\033[1;31m"
#define RESET "\033[0m"
#define BOLD "\033[1m"
#define L_PUPLE "\033[1;35m"
#define L_CYAN "\033[1;96m"
#define MAGENTA "\033[35m"

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

  class ExecWithoutSignException : public std::exception {
   public:
    const char *what() const throw();
  };

  std::string getName(void) const;
  int getGradeReqToSign(void) const;
  int getGradeReqToExec(void) const;
  bool getIsSigned(void) const;

  void beSigned(Bureaucrat const &bureaucrat);

  virtual void execute(Bureaucrat const &executor) const = 0;

  virtual ~Form(void);
};

std::ostream &operator<<(std::ostream &os, Form const &src);

#endif  // FORM_HPP