/**
 * @file serialization.cpp
 * @author yongjule (lyjshow200@gmail.com)
 * @brief Serialization and Deserialization function implementation
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "serialization.hpp"

uintptr_t serialize(Data* ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data* deserialize(uintptr_t raw) { return reinterpret_cast<Data*>(raw); }