/**
 * @file RobotomyRequestForm.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief RoboTomyRequestForm class derived from Abstract Form class declaration
 * @version 0.1
 * @date 2022-03-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
 private:
  std::string _target;

 public:
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(RobotomyRequestForm const &src);
  RobotomyRequestForm &operator=(RobotomyRequestForm const &src);
  void execute(Bureaucrat const &executor) const;
  ~RobotomyRequestForm(void);
};

#endif  // ROBOTOMYREQUESTFORM_HPP