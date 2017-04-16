/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/8
 * Common: 字符串
 */
#include <iostream>

using namespace std;

/**
 * 字符串是用 "null" 字符 "\0" 终止一堆字符数组的
 * @return 0
 */
int main() {

    /**
     * 定义一个字符数组
     */
    char hello[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    /**
     * 根据数组的初始化规则，我们可以这么定义
     */
    char world[] = "world";

    /**
     * 打印以上字符数组
     */
    cout << hello << endl;
    cout << world << endl;

    /**
     * string 类定义字符串
     */
    string str1 = "Hello";
    string str2 = "World";

    cout << "str1 = " << str1 << ", " << "str2 = " << str2 << endl;

    /**
     * 字符串拼接
     */
    cout << "str1 + str2 = " << str1 + str2 << endl;

    /**
     * 计算字符串长度
     */
    cout << "str1 size = " << str1.size() << endl;

    return 0;
}

