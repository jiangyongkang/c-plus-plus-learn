/**
 * Created by IDEA.
 * User: vincent
 * Date 2017/4/14
 * Common: 拷贝构造函数
 */

#include <iostream>
#include "CopyLine.h"

double CopyLine::getLength() {
    return length;
}

void CopyLine::setLength(double length) {
    this->length = length;
}

CopyLine::CopyLine(double length) {
    this->length = length;
}

void CopyLine::display(void) {
    std::cout << "line 大小：" << this->getLength() << std::endl;
}

CopyLine::CopyLine() {
    std::clog << "调用无参构造函数 ... " << std::endl;
}


CopyLine::CopyLine(const CopyLine &obj) {
    std::clog << "调用拷贝构造函数，传输参数为：" << &obj << std::endl;
    ptr = new int;    //为指针分配内存
    *ptr = *obj.ptr;  //拷贝值
}

CopyLine::~CopyLine() {
    std::clog << "调用析构函数，开始删除指针 ... " << std::endl;
    delete ptr;       //释放内存
}