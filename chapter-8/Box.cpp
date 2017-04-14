/**
 * Created by IDEA.
 * User: vincent
 * Date 2017/4/14
 * Common: 静态成员
 */

#include "Box.h"
#include <iostream>

int Box::count = 0;     //静态成员变量的初始化

int Box::getCount() {
    return count;
}

Box::Box(double length, double width, double breadth) {
    this->length = length;
    this->width = width;
    this->breadth = breadth;
    count++;
    std::clog << "created box >>> count = " << count << std::endl;
}

Box::~Box() {
    count--;
    std::clog << "deleted box >>> count = " << count << std::endl;
}

double Box::getLength() {
    return length;
}

double Box::getWidth() {
    return width;
}

double Box::getBreadth() {
    return breadth;
}

void Box::setLength(double length) {
    this->length = length;
}

void Box::setWidth(double width) {
    this->width = width;
}

void Box::setBreadth(double breadth) {
    this->breadth = breadth;
}