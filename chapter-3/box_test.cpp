/**
 * Created by IDEA.
 * User: vincent
 * Date 2017/4/13
 * Common: 类的声明、定义、成员变量、函数
 */
#include <iostream>
#include "Box.h"

using namespace std;

int main() {
    /**
     * 声明一个 Box 类型的对象 "box"
     */
    Box box;

    /**
     * 类的对象的公共数据成员可以使用直接成员访问运算符 "." 来访问。
     */
    box.length = 1.1;
    box.height = 2.2;
    box.breadth = 3.3;

    cout << "box 的体积：" << box.length * box.height * box.breadth << endl;
    cout << "box 的体积：" << box.getVolume() << endl;

    Box box1;

    box1.setLength(1.1);
    box1.setBreadth(2.2);
    box1.setHeight(3.3);

    cout << "box1 的体积：" << box1.length * box1.height * box1.breadth << endl;
    cout << "box1 的体积：" << box1.getVolume() << endl;

    return 0;
}

