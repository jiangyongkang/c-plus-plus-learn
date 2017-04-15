/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 多态主函数
 */

#include <iostream>
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
using namespace std;

int main(){
    Shape *shape;

    Rectangle rectangle(10, 7);
    Triangle triangle(10, 5);

    /**
     * 虚函数 是在基类中使用关键字 virtual 声明的函数。
     * 在派生类中重新定义基类中定义的虚函数时，会告诉编译器不要静态链接到该函数。
     */
    shape = &rectangle;
    shape->area();

    shape = &triangle;
    shape->area();

    return 0;
}

