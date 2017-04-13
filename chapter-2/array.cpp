/**
 * Created by vincent on 2017/4/8.
 */
#include <iostream>

using namespace std;

/**
 * 定于数组的语法：type arrayName [arraySize];
 * @return
 */
int main() {

    /**
     * 定义一个数组，并且初始化。
     * 其他声明方式：int array[5];
     *             int array[] = {1, 2, 3, 4, 5};
     */
    int array[5] = {1, 2, 3, 4, 5};

    /**
     * 数组的遍历通过下标取值，下标不可越界
     */
    for (int i = 0; i < 5; ++i) {
        cout << "array[" << i << "] = " << array[i] << endl;
    }

    /**
     * 计算数组元素个数
     */
    int array_size = sizeof(array) / sizeof(array[0]);

    cout << "数组元素个数：" << array_size << endl;

    return 0;
}

