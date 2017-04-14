/**
 * Created by IDEA.
 * User: vincent
 * Date 2017/4/14
 * Common: 静态成员
 */

#ifndef LEARN_BOX_H
#define LEARN_BOX_H

/**
 * 我们可以使用 static 关键字来把类成员定义为静态的。
 * 当我们声明类的成员为静态时，这意味着无论创建多少个类的对象，静态成员都只有一个副本。
 * 静态成员在类的所有对象中是共享的。如果不存在其他的初始化语句，在创建第一个对象时，所有的静态数据都会被初始化为零。
 * 我们不能把静态成员放置在类的定义中，但是可以在类的外部通过使用范围解析运算符 "::" 来重新声明静态变量从而对它进行初始化。
 */
class Box {
public:
    static int count;      //声明静态成员

    /**
     * 如果把函数成员声明为静态的，就可以把函数与类的任何特定对象独立开来。
     * 静态成员函数即使在类对象不存在的情况下也能被调用，静态函数只要使用类名加范围解析运算符 "::" 就可以访问。
     * 静态成员函数只能访问静态数据成员，不能访问其他静态成员函数和类外部的其他函数。
     * 静态成员函数有一个类范围，他们不能访问类的 this 指针。您可以使用静态成员函数来判断类的某些对象是否已被创建。
     * @return
     */
    static int getCount();

    Box(double length, double width, double breadth);

    double getLength(void);

    double getWidth(void);

    double getBreadth(void);

    void setLength(double length);

    void setWidth(double width);

    void setBreadth(double breadth);

    ~Box();

private:
    double length;
    double width;
    double breadth;
};


#endif //LEARN_BOX_H
