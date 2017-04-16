/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/14
 * Common: 友元函数
 */

#ifndef LEARN_BOX_H
#define LEARN_BOX_H

/**
 * 类的友元函数是定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员。
 * 尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数。
 * 友元可以是一个函数，该函数被称为友元函数；友元也可以是一个类，该类被称为友元类，在这种情况下，整个类及其所有成员都是友元。
 * 如果要声明函数为一个类的友元，需要在类定义中该函数原型前使用关键字 "friend"
 */
class Box {
private:
    double length;
    double width;
public:
    double getLength(void);

    double getWidth(void);

    void setLength(double length);

    void setWidth(double width);

    friend void display(Box box); //友元函数定义
};


#endif //LEARN_BOX_H
