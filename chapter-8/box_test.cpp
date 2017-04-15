/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/14
 * Common: 静态成员
 */
#include <iostream>
#include "Box.h"
using namespace std;

int main(){
    Box box1(123.123, 123.423, 234.234);
    Box box2(123.123, 123.423, 234.234);
    Box box3(123.123, 123.423, 234.234);

    /**
     * 静态成员方法可以直接通过 "类名::方法名" 来调用
     */
    cout << "static method " << Box::getCount() << endl;
    return 0;
}

