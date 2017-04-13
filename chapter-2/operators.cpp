#include <iostream>

using namespace std;

int main() {
    int x = 123;
    int y = 321;

    /**
     * 算数运算符
     */
    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x / y = " << x / y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x % y = " << x % y << endl;
    cout << "x++   = " << x++ << endl;
    cout << "y--   = " << y-- << endl << endl;

    /**
     * 关系运算符
     */
    cout << "x == y : " << (x == y) << endl;
    cout << "x != y : " << (x != y) << endl;
    cout << "x > y  : " << (x > y) << endl;
    cout << "x < y  : " << (x < y) << endl;
    cout << "x >= y : " << (x >= y) << endl;
    cout << "x <= y : " << (x <= y) << endl << endl;

    /**
     * 逻辑运算符
     */
    cout << "x && y : " << (x && y) << endl;
    cout << "x || y : " << (x && y) << endl;
    cout << "!x     : " << !x << endl << endl;

    /**
     * 三目运算
     */
    cout << "(x > y ? 0 : 1) = " << (x > y ? 0 : 1) << endl;

    return 0;
}
