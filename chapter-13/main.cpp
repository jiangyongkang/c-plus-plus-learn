/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 抽象类主方法
 */
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main(){
    Rectangle rectangle;
    Triangle triangle;

    rectangle.setLength(12.33);
    rectangle.setWidth(123.2);
    cout << "Total rectangle area: " << rectangle.getArea() << endl;

    triangle.setLength(123.33);
    triangle.setWidth(123.33);
    cout << "Total rectangle area: " << triangle.getArea() << endl;

}

