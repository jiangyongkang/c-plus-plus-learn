/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/22
 * Common: 命名空间
 */
#include <iostream>

using namespace std;

/**
 * 第一个命名空间
 */
namespace first_namespace {
    void function() {
        cout << "Inside first_namespace" << endl;
    }
}

/**
 * 第二个命名空间
 */
namespace second_namespace {
    void function() {
        cout << "Inside second_namespace" << endl;
    }
}

/**
 * 为了防止函数名相同，我们可以定义不同的命名空间。
 * 通过 "namespace" 关键字定义，通过 "::" 符号来调用。
 * 命名空间可以嵌套定义，嵌套的命名空间，依然通过 "::" 符号进行链式调用。
 * 一个命名空间的各个组成部分可以分散在多个文件中。
 * "using namespace" 指令告诉编译器命名空间。
 * @return
 */
int main(void) {

    // 调用第一个命名空间中的 function 函数
    first_namespace::function();

    // 调用第二个命名空间中的 function 函数
    second_namespace::function();

    //如果定义了 using namespace first_namespace;
    //就可以直接调用 function，而不需要加上 "first_namespace::"
    return 0;
}

