/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 重载
 */

#ifndef LEARN_PRINTDATA_H
#define LEARN_PRINTDATA_H

/**
 * C++ 允许在同一作用域中的某个函数和运算符指定多个定义，分别称为函数重载和运算符重载。
 * 重载声明是指一个与之前已经在该作用域内声明过的函数或方法具有相同名称的声明，但是它们的参数列表和定义（实现）不相同。
 * 当您调用一个重载函数或重载运算符时，编译器通过把您所使用的参数类型与定义中的参数类型进行比较，决定选用最合适的定义。
 * 选择最合适的重载函数或重载运算符的过程，称为重载决策。
 * 实际上和 Java 的重载核心理念是一样的。
 *
 * 在同一个作用域内，可以声明几个功能类似的同名函数，
 * 但是这些同名函数的形式参数（指参数的个数、类型或者顺序）必须不同。您不能仅通过返回类型的不同来重载函数。
 */
class PrintData {
public:
    /**
     * 在同一个作用域内，可以声明几个功能类似的同名函数，
     * 但是这些同名函数的形式参数（指参数的个数、类型或者顺序）必须不同。
     * 不能仅通过返回类型的不同来重载函数。
     */
    void print(double number);

    void print(float number);

    void print(int number);

    void print(long number);
};


#endif //LEARN_PRINTDATA_H
