/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/14
 * Common: 友元函数
 */
#include <iostream>
#include "Box.h"

using namespace std;

int main() {
    Box box;
    box.setLength(10.11);
    box.setWidth(12.33);
    display(box);       //调用友元函数
    return 0;
}

