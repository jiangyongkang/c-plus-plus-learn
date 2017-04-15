/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 多态（基类）
 */

#ifndef LEARN_SHAPE_H
#define LEARN_SHAPE_H

/**
 * 多态按字面的意思就是多种形态。
 * 当类之间存在层次结构，并且类之间是通过继承关联时，就会用到多态。
 * C++ 多态意味着调用成员函数时，会根据调用函数的对象的类型来执行不同的函数。
 */
class Shape {
protected:
    int width;
    int height;
public:
    Shape(int width, int height);

    /**
     * virtual 声明的函数为虚函数
     * 在派生类中重新定义基类中定义的虚函数时，会告诉编译器不要静态链接到该函数。
     * 也就是执行派生类的函数时，不会调用基类中的函数定义。
     * 和 Java 中的 super() 关键字虽然用法不同，但却有异曲同工之妙。
     * 未加该关键字，调用派生类的 area() 方法，会执行基类中的该方法。
     * 加了该关键字，则调用派生类自己的 area() 方法。
     * 虚函数必须实现。
     * @return 派生类 area() 函数的返回值
     */
    virtual int area(void);

    /**
     * 您可能想要在基类中定义虚函数，以便在派生类中重新定义该函数更好地适用于对象。
     * 但是您在基类中又不能对虚函数给出有意义的实现，这个时候就会用到纯虚函数。
     * "= 0" 告诉编译器，函数没有主体。
     * 含有纯虚函数的类成为抽象类，它不能生成对象。
     * 抽象类的派生类必须实现纯虚函数。
     * @return
     */
    //virtual int v_area(void) = 0;
};


#endif //LEARN_SHAPE_H
