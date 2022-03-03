/**
 * @file serialization.hpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief  Serialization and Deserialization function declaration
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <stdint.h>
struct Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif  // SERIALIZATION_HPP