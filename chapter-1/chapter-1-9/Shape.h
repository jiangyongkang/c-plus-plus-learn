/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 继承（基类）
 */

#ifndef LEARN_SHAPE_H
#define LEARN_SHAPE_H

/**
 * 面向对象程序设计中最重要的一个概念是继承。
 * 继承允许我们依据另一个类来定义一个类，这使得创建和维护一个应用程序变得更容易。
 * 这样做，也达到了重用代码功能和提高执行时间的效果。
 * 当创建一个类时，您不需要重新编写新的数据成员和成员函数，只需指定新建的类继承了一个已有的类的成员即可。
 * 这个已有的类称为基类，新建的类称为派生类。
 * 一个类可以派生自多个类，这意味着，它可以从多个基类继承数据和函数。
 */
class Shape {
public:
    int getWidth(void);

    int getHeight(void);

    void setWidth(int width);

    void setHeight(int height);

protected:
    int width;
    int height;

};


#endif //LEARN_SHAPE_H
