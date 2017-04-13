cmake_minimum_required(VERSION 3.6)
project(learn)

set(CMAKE_CXX_STANDARD 11)

# Hello World
set(MAIN_FILES "chapter-1/main.cpp")

# 基本数据类型
set(BASIC_FILES "chapter-2/basic.cpp")

# 枚举
set(ENUM_FILES "chapter-2/enum.cpp")

# c常量
set(CONSTANT_FILES "chapter-2/constant.cpp")

# 运算符
set(OPERATORS_FILES "chapter-2/operators.cpp")

# 控制语句
set(CONTROLLER_FILES "chapter-2/controller.cpp")

# 函数
set(FUNCTION_FILES "chapter-2/function.cpp")

# 随机数
set(RANDOM_FILES "chapter-2/random.cpp")

# 数组
set(ARRAY_FILES "chapter-2/array.cpp")

# 字符串
set(STRING_FILES "chapter-2/string.cpp")

# 日期时间
set(DATE_TIME_FILES "chapter-2/data_time.cpp")

# 输入和输出
set(IO_FILES "chapter-2/io.cpp")

# 数据结构
set(STRUCT_FILES "chapter-2/struct.cpp")

# 类成员函数
set(BOX_CLASS "chapter-3/box_test.cpp" chapter-3/Box.cpp chapter-3/Box.h)

# 类访问修饰符
set(BASE_CLASS "chapter-3/base_test.cpp" chapter-3/Base.cpp chapter-3/Base.h)

# 类的构造函数和析构函数
set(LINE_CLASS "chapter-3/line_test.cpp" chapter-3/Line.cpp chapter-3/Line.h)


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
add_executable(box ${BOX_CLASS})
add_executable(base ${BASE_CLASS})
add_executable(line ${LINE_CLASS})
