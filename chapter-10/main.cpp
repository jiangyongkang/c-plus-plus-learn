/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 重载
 */
#include <iostream>
#include "PrintData.h"

using namespace std;

int main() {

    PrintData printData;

    /**
     * 调用函数时，编译器会根据传入的类型对方法进行匹配。
     * 选择正确的方法。
     */
    printData.print(1.1);
    printData.print(1.1F);
    printData.print(1);
    printData.print(1L);

    return 0;
}

