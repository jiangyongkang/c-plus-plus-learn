/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 派生类
 */

#ifndef LEARN_TRIANGLE_H
#define LEARN_TRIANGLE_H

#include "Shape.h"


class Triangle : public Shape {
public:
    Triangle(int width, int height);

    int area(void);
};


#endif //LEARN_TRIANGLE_H
