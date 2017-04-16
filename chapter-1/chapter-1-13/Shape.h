/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 接口（抽象类）
 */

#ifndef LEARN_BOX_H
#define LEARN_BOX_H


class Shape {
public:
    /**
     * 存虚函数（Java 中的抽象方法）
     * 不可以在 Box.cpp 中写实现方法，仅供派生类重写该方法。
     * 并且和 Java 很类似，该类定义了一个抽象方法，那么该类就是一个抽象类，即接口。
     * 该类也就无法创建对象，仅供继承用基类。
     * @return
     */
    virtual double getArea() = 0;

    void setLength(double length);

    void setWidth(double width);

protected:
    double length;
    double width;
};


#endif //LEARN_BOX_H
