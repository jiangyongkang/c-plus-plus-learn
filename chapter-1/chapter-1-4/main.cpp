/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/13
 * Common: 类的访问修饰符
 */
#include <iostream>
#include "Base.h"

using namespace std;

int main() {
    Base base;

    /**
     * 类的成员属性被 private 修饰后无法直接访问，只能通过 public 修饰的方法来间接的复制x1
     */
    base.setWidth(1.1);
    base.setLength(2.2);

    cout << "base width = " << base.getWidth() << " base length = " << base.getLength() << endl;
    return 0;
}

