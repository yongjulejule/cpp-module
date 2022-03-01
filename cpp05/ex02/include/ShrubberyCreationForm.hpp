/**
 * @file ShrubberyCreationForm.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief ShrubberyCreationForm class derived Form Abstract class declaration
 * @version 0.1
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
 private:
  std::string _target;

 public:
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(ShrubberyCreationForm const &src);
  ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
  void execute(Bureaucrat const &executor);
  ~ShrubberyCreationForm(void);
};

#endif  // SHRUBBERYCREATIONFORM_HPP