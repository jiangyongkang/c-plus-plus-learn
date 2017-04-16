/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 派生类
 */

#ifndef LEARN_RECTANGLE_H
#define LEARN_RECTANGLE_H

#include "Shape.h"


class Rectangle : public Shape{
public:
    Rectangle(int width, int height);
    int area(void);
};


#endif //LEARN_RECTANGLE_H
