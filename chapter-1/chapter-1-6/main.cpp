/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/14
 * Common: TODO:拷贝构造函数
 */
#include <iostream>
#include "CopyLine.h"

using namespace std;

int main(void) {
    const CopyLine line(10);
    CopyLine copyLine(line);        //调用拷贝构造函数
    CopyLine copyLine1 = copyLine;  //调用拷贝构造函数
    copyLine.display();
    copyLine1.display();

    return 0;
}
