/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/14
 * Common: 拷贝构造函数
 */

#ifndef LEARN_COPYLINE_H
#define LEARN_COPYLINE_H

#include "../chapter-1-5/Line.h"

/**
 * 拷贝构造函数是一种特殊的构造函数，它在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象。
 * 通过使用另一个同类型的对象来初始化新创建的对象。
 * 复制对象把它作为参数传递给函数。
 * 复制对象，并从函数返回这个对象。
 * 如果在类中没有定义拷贝构造函数，编译器会自行定义一个。如果类带有指针变量，并有动态内存分配，则它必须有一个拷贝构造函数。
 * 常见的拷贝构造函数格式：classname (const classname &obj) { // 构造函数的主体 }
 */
class CopyLine {
public:
    double getLength(void);

    void setLength(double length);

    void display(void);

    CopyLine(void);                  //无参的构造函数

    CopyLine(double length);         //简单的构造函数

    CopyLine(const CopyLine &obj);   //拷贝构造函数

    ~CopyLine();                     //析构函数

private:
    double length;                   //基本数据类型的变量
    int *ptr;                        //指针型成员变量
};


#endif //LEARN_COPYLINE_H
