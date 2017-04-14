/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 继承测试主函数
 */
#include <iostream>
#include "Shape.h"
#include "PaintCost.h"
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle rectangle;

    /**
     * Rectangle 继承自 Shape、PaintCost 类。
     * 所以，Rectangle 类可以直接使用其父类的方法和属性
     */
    rectangle.setWidth(10);
    rectangle.setHeight(10);

    cout << "total area: " << rectangle.getArea() << endl;
    cout << "total paint cost: " << rectangle.getCost(rectangle.getArea()) << endl;
    return 0;
}

