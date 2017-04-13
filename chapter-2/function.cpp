/**
 * Created by vincent on 2017/4/8.
 */
#include <iostream>

using namespace std;

/**
 * 函数声明
 * @param x 参数
 * @param y 参数
 * @return 返回两个数中大的那个数
 */
int max(int x, int y);

/**
 * 函数可以指定默认值，若未传入参数，按默认值进行计算
 * 指定默认值仅仅只能在方法声明处进行指定
 * @param x 参数
 * @param y 参数
 * @return 返回两个数中小的那个数
 */
int min(int x = 0, int y = 0);

int main() {

    int x = 100;
    int y = 200;

    cout << "Total value is : " << max(x, y) << endl;
    cout << "Min value is : " << min(x, y) << endl;
    return 0;
}

/**
 * 函数的实现
 * @param x 参数
 * @param y 参数
 * @return 返回两个数中大的那个数
 */
int max(int x, int y) {
    return x > y ? x : y;
}

/**
 * 函数可以指定默认值，若未传入参数，按默认值进行计算
 * @param x 参数
 * @param y 参数
 * @return 返回两个数中小的那个数
 */
int min(int x, int y) {
    return x < y ? x : y;
}

