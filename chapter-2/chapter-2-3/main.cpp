/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/22
 * Common: 动态内存
 */
#include <iostream>
using namespace std;

/**
 * 栈：在函数内部声明的所有变量都将占用栈内存。
 * 堆：这是程序中未使用的内存，在程序运行时可用于动态分配内存。
 * 很多时候，无法提前预知需要多少内存来存储某个定义变量中的特定信息，所需内存的大小需要在运行时才能确定。
 * 在 C++ 中，您可以使用特殊的运算符为给定类型的变量在运行时分配堆内的内存，这会返回所分配的空间地址。这种运算符即 new 运算符。
 * 可以使用 delete 运算符，删除之前由 new 运算符分配的内存。
 * @return
 */
int main(void) {

    /**
     * 为指针动态分配内存
     */
    double * pValue = new double;

    /**
     * 在分配的地址中存储值
     */
    *pValue = 123123.1223;
    cout << *pValue << endl;

    /**
     * 释放内存
     */
    delete pValue;

    return 0;
}

