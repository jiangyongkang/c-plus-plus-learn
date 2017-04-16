/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/14
 * Common: 友元函数
 */

#include "Box.h"
#include <iostream>

double Box::getLength() {
    return length;
}

double Box::getWidth() {
    return width;
}

void Box::setLength(double length) {
    this->length = length;
}

void Box::setWidth(double width) {
    this->width = width;
}

/**
 * 友元函数的实现不需要 "Box::" 因为它并不属于 Box 类
 * @param box
 */
void display(Box box) {
    std::clog << "Box[length = " << box.getLength() << ", width = " << box.getWidth() << "]" << std::endl;
}
