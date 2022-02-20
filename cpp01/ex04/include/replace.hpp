/**
 * @file replace.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief header for replace functions
 * @version 0.1
 * @date 2022-02-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef REPLACE_HPP
# define  REPLACE_HPP

# include <iostream>
# include <string>

const std::string readFileIntoString(const std::string& filePath);
const std::string replaceContent(const std::string& from, const std::string& to, const std::string& content);
void	saveToNewFile(const std::string& filePath, const std::string& newContent);

#endif // REPLACE_HPP