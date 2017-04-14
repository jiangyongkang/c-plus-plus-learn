/**
 * Created by IDEA.
 * User: vincent
 * Date 2017/4/13
 * Common: 构造函数和析构函数
 */

#ifndef LEARN_LINE_H
#define LEARN_LINE_H


/**
 * 类的构造函数是类的一种特殊的成员函数，它会在每次创建类的新对象时执行。
 * 构造函数的名称与类的名称是完全相同的，并且不会返回任何类型，也不会返回 void。
 * 构造函数可用于为某些成员变量设置初始值。
 */
class Line {
    /**
     * 私有的成员变量
     */
private:
    double length;
    int number;
    /**
     * 公共方法
     */
public:
    Line();                          //无参构造方法

    Line(double length);             //有参构造方法
    
    Line(int number);

    Line(double length, int number);

    double getLength();

    void setLength(double length);

    int getNumber();

    void setNumber(int number);

    ~Line();                          //析构函数
};


#endif //LEARN_LINE_H
