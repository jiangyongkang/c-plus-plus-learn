/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/22
 * Common: 异常处理
 */
#include <iostream>
using namespace std;

double division(int a, int b);

int main(void) {

    double result;

    try {
        result = division(50, 0);
        cout << result << endl;
    } catch (const char* msg) {
        //由于我们抛出了一个类型为 const char* 的异常，因此，当捕获该异常时，我们必须在 catch 块中使用 const char*。
        cerr << msg << endl;
    }


    return 0;
}

/**
 * 抛出一个除以零的异常，并在 catch 块中捕获该异常。
 * @param a
 * @param b
 * @return
 */
double division(int a, int b){
    return b == 0 ? throw "Division by zero condition." : a/b;
}

