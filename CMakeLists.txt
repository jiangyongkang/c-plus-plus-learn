cmake_minimum_required(VERSION 3.6)
project(learn)

set(CMAKE_CXX_STANDARD 11)

# Hello World
set(MAIN_FILES "chapter 1-1/main.cpp")

# 基本数据类型
set(BASIC_FILES "chapter 1-2/basic.cpp")

# 枚举
set(ENUM_FILES "chapter 1-2/enum.cpp")

# c常量
set(CONSTANT_FILES "chapter 1-2/constant.cpp")

# 运算符
set(OPERATORS_FILES "chapter 1-2/operators.cpp")

# 控制语句
set(CONTROLLER_FILES "chapter 1-2/controller.cpp")

# 函数
set(FUNCTION_FILES "chapter 1-2/function.cpp")

# 随机数
set(RANDOM_FILES "chapter 1-2/random.cpp")

# 数组
set(ARRAY_FILES "chapter 1-2/array.cpp")

# 字符串
set(STRING_FILES "chapter 1-2/string.cpp")

# 日期时间
set(DATE_TIME_FILES "chapter 1-2/data_time.cpp")

# 输入和输出
set(IO_FILES "chapter 1-2/io.cpp")

# 数据结构
set(STRUCT_FILES "chapter 1-2/struct.cpp")


add_executable(main ${MAIN_FILES})
add_executable(basic ${BASIC_FILES})
add_executable(enum ${ENUM_FILES})
add_executable(constant ${CONSTANT_FILES})
add_executable(operators ${OPERATORS_FILES})
add_executable(controller ${CONTROLLER_FILES})
add_executable(function ${FUNCTION_FILES})
add_executable(random ${RANDOM_FILES})
add_executable(array ${ARRAY_FILES})
add_executable(string ${STRING_FILES})
add_executable(datatime ${DATE_TIME_FILES})
add_executable(io ${IO_FILES})
add_executable(struct ${STRUCT_FILES})