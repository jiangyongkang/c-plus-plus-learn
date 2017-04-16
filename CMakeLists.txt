cmake_minimum_required(VERSION 3.6)
project(learn)

set(CMAKE_CXX_STANDARD 11)

# Hello World
set(MAIN_FILES "chapter-1/chapter-1-1/main.cpp")

# 基本数据类型
set(BASIC_FILES "chapter-1/chapter-1-2/basic.cpp")

# 枚举
set(ENUM_FILES "chapter-1/chapter-1-2/enum.cpp")

# c常量
set(CONSTANT_FILES "chapter-1/chapter-1-2/constant.cpp")

# 运算符
set(OPERATORS_FILES "chapter-1/chapter-1-2/operators.cpp")

# 控制语句
set(CONTROLLER_FILES "chapter-1/chapter-1-2/controller.cpp")

# 函数
set(FUNCTION_FILES "chapter-1/chapter-1-2/function.cpp")

# 随机数
set(RANDOM_FILES "chapter-1/chapter-1-2/random.cpp")

# 数组
set(ARRAY_FILES "chapter-1/chapter-1-2/array.cpp")

# 字符串
set(STRING_FILES "chapter-1/chapter-1-2/string.cpp")

# 日期时间
set(DATE_TIME_FILES "chapter-1/chapter-1-2/data_time.cpp")

# 输入和输出
set(IO_FILES "chapter-1/chapter-1-2/io.cpp")

# 数据结构
set(STRUCT_FILES "chapter-1/chapter-1-2/struct.cpp")

# 类成员函数
set(BOX_CLASS "chapter-1/chapter-1-3/main.cpp" chapter-1/chapter-1-3/Box.cpp chapter-1/chapter-1-3/Box.h)

# 类访问修饰符
set(BASE_CLASS "chapter-1/chapter-1-4/main.cpp" chapter-1/chapter-1-4/Base.cpp chapter-1/chapter-1-4/Base.h)

# 类的构造函数和析构函数
set(LINE_CLASS "chapter-1/chapter-1-5/main.cpp" chapter-1/chapter-1-5/Line.cpp chapter-1/chapter-1-5/Line.h)

# 拷贝构造函数
set(COPY_LINE_CLASS "chapter-1/chapter-1-6/main.cpp" chapter-1/chapter-1-6/CopyLine.cpp chapter-1/chapter-1-6/CopyLine.h)

# 友元函数
set(FRIEND_CLASS "chapter-1/chapter-1-7/main.cpp" chapter-1/chapter-1-7/Box.cpp chapter-1/chapter-1-7/Box.h)

# 静态成员
set(STATIC_CLASS "chapter-1/chapter-1-8/main.cpp" chapter-1/chapter-1-8/Box.cpp chapter-1/chapter-1-8/Box.h)

# 继承
set(EXTENS_CLASS "chapter-1/chapter-1-9/main.cpp" chapter-1/chapter-1-9/Shape.cpp chapter-1/chapter-1-9/Shape.h chapter-1/chapter-1-9/PaintCost.cpp chapter-1/chapter-1-9/PaintCost.h chapter-1/chapter-1-9/Rectangle.cpp chapter-1/chapter-1-9/Rectangle.h)

# 重载
set(PRINT_CLASS "chapter-1/chapter-1-10/main.cpp" chapter-1/chapter-1-10/PrintData.cpp chapter-1/chapter-1-10/PrintData.h)

# 多态
set(POLYMORPHISM_CLASS "chapter-1/chapter-1-11/main.cpp" chapter-1/chapter-1-11/Shape.cpp chapter-1/chapter-1-11/Shape.h chapter-1/chapter-1-11/Rectangle.cpp chapter-1/chapter-1-11/Rectangle.cpp chapter-1/chapter-1-11/Triangle.cpp chapter-1/chapter-1-11/Triangle.h)

# 数据抽象
set(DATA_ABSTRACT_CLASS "chapter-1/chapter-1-12/main.cpp" chapter-1/chapter-1-12/Adder.cpp chapter-1/chapter-1-12/Adder.h)

# 接口（抽象类）
set(INTERFACE_CLASS "chapter-1/chapter-1-13/main.cpp" chapter-1/chapter-1-13/Shape.cpp chapter-1/chapter-1-13/Shape.h chapter-1/chapter-1-13/Rectangle.cpp chapter-1/chapter-1-13/Rectangle.h chapter-1/chapter-1-13/Triangle.cpp chapter-1/chapter-1-13/Triangle.h)

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
add_executable(copy_line ${COPY_LINE_CLASS})
add_executable(friend ${FRIEND_CLASS})
add_executable(static ${STATIC_CLASS})
add_executable(extens ${EXTENS_CLASS})
add_executable(print ${PRINT_CLASS})
add_executable(polymorphism ${POLYMORPHISM_CLASS})
add_executable(data_abstract ${DATA_ABSTRACT_CLASS})
add_executable(inteface ${INTERFACE_CLASS})
