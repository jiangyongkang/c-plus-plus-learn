/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common:
 */
#include <iostream>
#include "Triangle.h"

Triangle::Triangle(int width, int height) : Shape(width, height) {}

int Triangle::area() {
    std::clog << "Triangle class area: " << std::endl;
    return width * height / 2;
}