/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 数据抽象
 */

#include "Adder.h"

Adder::Adder(int total) {
    this->total = total;
}

void Adder::addNum(int number) {
    total += number;
}

int Adder::getTotal() {
    return total;
}
