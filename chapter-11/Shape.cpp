/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 多态（基类）
 */
#include <iostream>
#include "Shape.h"

Shape::Shape(int width, int height) {
    this->width = width;
    this->height = height;
}

int Shape::area(void) {
    std::clog << "Parent class area: " << std::endl;
    return 0;
}
