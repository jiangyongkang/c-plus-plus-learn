/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/13
 * Common: 类的访问修饰符
 */

#include "Base.h"

double Base::getLength() {
    return length;
}

double Base::getWidth() {
    return width;
}

double Base::setLength(double length) {
    this->length = length;
}

double Base::setWidth(double width) {
    this->width = width;
}
