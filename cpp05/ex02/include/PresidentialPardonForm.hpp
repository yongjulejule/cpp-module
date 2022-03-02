/**
 * @file PresidentialPardonForm.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief PresidentialPardonForm class derived from Abstract Form class
 * declaration
 * @version 0.1
 * @date 2022-03-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
 private:
  std::string _target;

 public:
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(PresidentialPardonForm const &src);
  PresidentialPardonForm &operator=(PresidentialPardonForm const &src);
  void execute(Bureaucrat const &executor) const;
  ~PresidentialPardonForm(void);
};

#endif  // PRESIDENTIALPARDONFORM_HPP