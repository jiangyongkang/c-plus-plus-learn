/**
 * Created by vincent on 2017/4/8.
 */
#include <iostream>

using namespace std;

/**
 * 关于随机数，有两个相关的函数。
 * rand() 该函数返回一个伪随机数
 * srand() 设置种子
 * @return 0
 */
int main() {

    //设置随机数种子
    srand((unsigned) time(NULL));

    for (int i = 0; i < 10; ++i) {
        int number = rand();
        cout << "第" << i << "个随机数 : " << number << endl;
    }

    return 0;
}