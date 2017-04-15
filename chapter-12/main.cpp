/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 数据抽象
 */
#include <iostream>
#include "Adder.h"
using namespace std;

int main(){
    Adder adder;

    adder.addNum(100);
    cout << "Total: " << adder.getTotal() << endl;

    adder.addNum(100);
    cout << "Total: " << adder.getTotal() << endl;


    return 0;
}

