/**
 * @file Intern.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Intern class declaration
 * @version 0.1
 * @date 2022-03-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>

class Form;

class Intern {
 private:
  Form *makeShrubberyCreationForm(std::string target);
  Form *makeRobotomyRequestForm(std::string target);
  Form *makePresidentialPardonForm(std::string target);

 public:
  Intern(void);
  Intern(Intern const &src);

  Intern &operator=(Intern const &src);

  Form *makeForm(std::string formName, std::string formTarget);

  class FormNotFoundException : public std::exception {
   public:
    const char *what() const throw();
  };

  ~Intern(void);
};

#endif  // INTERN_HPP