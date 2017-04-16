/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/9
 * Common: 流
 */
#include <iostream>

using namespace std;

int main() {

    char name[50];

    /**
     * 输入输出流
     */
    cout << "you name : ";
    cin >> name;
    cout << name;

    /**
     * 标准错误流
     */
    cerr << "error message : " << "unable to read ... " << endl;

    /**
     * 标准日志流
     */
    clog << "info message : " << "unable to read ... " << endl;

    return 0;
}
