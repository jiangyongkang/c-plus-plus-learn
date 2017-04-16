/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/13
 * Common: 类的声明、定义、成员变量、函数
 */

#include "Box.h"

/**
 * 使用范围解析运算符 "::" 来定义方法。
 * 在类定义中定义的成员函数把函数声明为内联的，即便没有使用 inline 标识符。
 * @return 体积
 */
double Box::getVolume() {
    return length * height * breadth;
}

void Box::setLength(double length) {
    this->length = length;
}

void Box::setBreadth(double breadth) {
    this->breadth = breadth;
}

void Box::setHeight(double height) {
    this->height = height;
}