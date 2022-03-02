/**
 * @file Bureaucrat.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Bureaucrat class declaration
 * @version 0.1
 * @date 2022-02-27
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form;

class Bureaucrat {
 private:
  const std::string _name;
  int _grade;

 public:
  Bureaucrat(void);
  Bureaucrat(std::string name, int grade);
  Bureaucrat(Bureaucrat const &src);
  Bureaucrat const &operator=(Bureaucrat const &src);

  const std::string getName(void) const;
  int getGrade(void) const;

  void incrementGrade(void);
  void decrementGrade(void);

  void executeForm(Form const &form);

  class GradeTooHighException : public std::exception {
   public:
    const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
   public:
    const char *what() const throw();
  };

  ~Bureaucrat(void);
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &src);

#endif  // BUREAUCRAT_HPP