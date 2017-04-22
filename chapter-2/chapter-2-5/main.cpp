/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/22
 * Common: 模板
 */
#include <iostream>
#include "Stack.h"

using namespace std;

template<typename T>
inline T const &Max(T const &x, T const &y) {
    return x > y ? x : y;
}

int main(void) {

    cout << "Max(100, 200) = " << Max(100, 200) << endl;
    cout << "Max(10.5F, 20.5F) = " << Max(10.5F, 20.5F) << endl;
    cout << "Max(10.5, 20.5) = " << Max(10.5, 20.5) << endl;

    try {
        Stack<int> intStack;
        Stack<string> stringStack;
        intStack.push(111);
        //cout << intStack.top() << endl;
    } catch (exception const & e){
        cerr << "Exception: " << e.what() << endl;
        return -1;
    }


    return 0;
}

