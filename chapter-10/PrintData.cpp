/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 重载
 */

#include <iostream>
#include "PrintData.h"

void PrintData::print(double number) {
    std::clog << "[method double] >>> " << number << std::endl;
}

void PrintData::print(float number) {
    std::clog << "[method float] >>> " << number << std::endl;
}

void PrintData::print(int number) {
    std::clog << "[method int] >>> " << number << std::endl;
}

void PrintData::print(long number) {
    std::clog << "[method long] >>> " << number << std::endl;
}
