/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common:
 */

#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(int width, int height) : Shape(width, height) {}

int Rectangle::area() {
    std::clog << "Rectangle class area: " << std::endl;
    return width * height;
}
