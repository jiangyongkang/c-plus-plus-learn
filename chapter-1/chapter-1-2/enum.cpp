/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 枚举
 */
#include <iostream>

using namespace std;

/**
 * 枚举类型(enumeration)是C++中的一种派生数据类型，它是由用户定义的若干枚举常量的集合。
 * 如果一个变量只有几种可能的值，可以定义为枚举(enumeration)类型。
 * 所谓"枚举"是指将变量的值一一列举出来，变量的值只能在列举出来的值的范围内。
 *
 * @return 0
 */
int main() {

    /**
     * 枚举类型定义
     * enum 类型名 {枚举值列表}; 枚举值列表的各个值用 "," 隔开
     */
    enum Color {
        red, green, blue
    };

    /**
     * 枚举变量定义
     */
    enum Color c_red = red;
    enum Color c_green = green;
    enum Color c_blue = blue;

    /**
     * 输出枚举变量值
     */
    cout << "red value :   " << c_red << endl;
    cout << "green value : " << c_green << endl;
    cout << "blue value :  " << c_blue << endl;

    return 0;
}

