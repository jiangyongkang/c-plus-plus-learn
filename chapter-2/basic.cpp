#include <iostream>

using namespace std;

int main() {
    bool bl = false;        //布尔
    char c = 'A';           //字符
    int number = 100;       //整形
    float f_number = 10.5;  //单精度浮点
    double d_number = 18.3; //双精度浮点
    wchar_t w_char = 'A';   //宽字符型

    cout << "size of bool :         " << sizeof(bl) << endl;
    cout << "size of char :         " << sizeof(c) << endl;
    cout << "size of int :          " << sizeof(number) << endl;
    cout << "size of float :        " << sizeof(f_number) << endl;
    cout << "size of double :       " << sizeof(d_number) << endl;
    cout << "size of wchar_t :      " << sizeof(w_char) << endl;

    signed int s_number = -100; //有符号整形
    unsigned int u_s_number = 100; //无符号整形
    short int short_number = 100; //短整型
    long int l_number = 100; //长整型

    cout << "size of signed int :   " << sizeof(s_number) << endl;
    cout << "size of unsigned int : " << sizeof(u_s_number) << endl;
    cout << "size of short int :    " << sizeof(short_number) << endl;
    cout << "size of long int :     " << sizeof(l_number) << endl;

    return 0;
}
