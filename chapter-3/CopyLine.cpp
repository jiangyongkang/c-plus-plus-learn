/**
 * Created by IDEA.
 * User: vincent
 * Date 2017/4/14
 * Common: �������캯��
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
    std::cout << "line ��С��" << this->getLength() << std::endl;
}

CopyLine::CopyLine() {
    std::clog << "�����޲ι��캯�� ... " << std::endl;
}


CopyLine::CopyLine(const CopyLine &obj) {
    std::clog << "���ÿ������캯�����������Ϊ��" << &obj << std::endl;
    ptr = new int;    //Ϊָ������ڴ�
    *ptr = *obj.ptr;  //����ֵ
}

CopyLine::~CopyLine() {
    std::clog << "����������������ʼɾ��ָ�� ... " << std::endl;
    delete ptr;       //�ͷ��ڴ�
}