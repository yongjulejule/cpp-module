/**
 * @file ShrubberyCreationForm.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief ShrubberyCreationForm class derived Abstract Form class declaration
 * @version 0.1
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

#define ASCII_TREE \
  "\n\
       ###\n\
      #o###\n\
    #####o###\n\
   #o#\\#|#/###\n\
    ###\\|/#o#\n\
     # }|{  #\n\
       }|{\n\
"

class ShrubberyCreationForm : public Form {
 private:
  std::string _target;

 public:
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(ShrubberyCreationForm const &src);
  ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
  void execute(Bureaucrat const &executor) const;
  ~ShrubberyCreationForm(void);
};

#endif  // SHRUBBERYCREATIONFORM_HPP