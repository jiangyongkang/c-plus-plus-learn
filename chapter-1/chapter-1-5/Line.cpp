/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/13
 * Common: 构造函数和析构函数
 */

#include <iostream>
#include "Line.h"
/**
 * 默认的构造函数没有任何参数，但如果需要，构造函数也可以带有参数。
 * 这样在创建对象时就会给对象赋初始值。
 */
Line::Line() {
    std::clog << "Object is begin created ... " << std::endl;
}

Line::Line(double length) {
    std::clog << "Object is begin created ... " << std::endl;
    this->length = length;
}

Line::Line(int number) : number(number) {
    std::clog << "Object is begin created ... " << std::endl;
}

/**
 * 使用初始化列表来初始化字段
 * length(length) 语法等同于 this->length = length;
 * @param length 长度
 * @param number 号码
 */
Line::Line(double length, int number) : length(length), number(number) {
    std::clog << "Object is begin created ... " << std::endl;
}

double Line::getLength() {
    return length;
}

int Line::getNumber() {
    return number;
}

void Line::setLength(double length) {
    this->length = length;
}

void Line::setNumber(int number) {
    this->number = number;
}

/**
 * 类的析构函数是类的一种特殊的成员函数，它会在每次删除所创建的对象时执行。
 * 析构函数的名称与类的名称是完全相同的，只是在前面加了个波浪号（~）作为前缀，它不会返回任何值，也不能带有任何参数。
 * 析构函数有助于在跳出程序（比如关闭文件、释放内存等）前释放资源。
 */
Line::~Line() {
    std::clog << "Object is being deleted ... " << std::endl;
}
