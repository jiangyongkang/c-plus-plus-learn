/**
 * Created by IDEA.
 * User: vincent
 * Date 2017/4/13
 * Common: 构造函数和析构函数
 */
#include <iostream>
#include "Line.h"

using namespace std;

int main() {

    Line line;
    line.setLength(234.42);
    line.setNumber(2);
    clog << "line : " << line.getNumber() << ", " << line.getLength() << endl;

    Line line_8(8);
    line_8.setLength(123.41);
    clog << "line 8 : " << line_8.getNumber() << ", " << line_8.getLength() << endl;

    Line line_12(900.11);
    line_12.setNumber(12);
    clog << "line 12 : " << line_12.getNumber() << ", " << line_12.getLength() << endl;

    Line line_9(123.33, 9);
    clog << "line 9 : " << line_9.getNumber() << ", " << line_9.getLength() << endl;

    return 0;
}

