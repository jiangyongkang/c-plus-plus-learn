/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 继承（基类）
 */

#include "Shape.h"

int Shape::getWidth() {
    return width;
}

int Shape::getHeight() {
    return height;
}

void Shape::setWidth(int width) {
    this->width = width;
}

void Shape::setHeight(int height) {
    this->height = height;
}
