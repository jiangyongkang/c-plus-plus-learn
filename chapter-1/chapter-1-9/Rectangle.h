/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 继承（派生类）
 */

#ifndef LEARN_RECTANGLE_H
#define LEARN_RECTANGLE_H

#include "Shape.h"
#include "PaintCost.h"

/**
 * 派生类可以访问基类中所有的非私有成员。
 * 因此基类成员如果不想被派生类的成员函数访问，则应在基类中声明为 private。
 * 一个派生类继承了所有的基类方法，但下列情况除外：
 * 1.基类的构造函数、析构函数和拷贝构造函数。
 * 2.基类的重载运算符。
 * 3.基类的友元函数。
 *
 * 当一个类派生自基类，该基类可以被继承为 public、protected 或 private 几种类型。
 * 我们几乎不使用 protected 或 private 继承，通常使用 public 继承。
 * 当使用不同类型的继承时，遵循以下几个规则：
 * 1.公有继承（public）：当一个类派生自公有基类时，基类的公有成员也是派生类的公有成员，
 * 基类的保护成员也是派生类的保护成员，基类的私有成员不能直接被派生类访问，但是可以通过调用基类的公有和保护成员来访问。
 * 2.保护继承（protected）： 当一个类派生自保护基类时，基类的公有和保护成员将成为派生类的保护成员。
 * 3.私有继承（private）：当一个类派生自私有基类时，基类的公有和保护成员将成为派生类的私有成员。
 *
 * C++ 类可以从多个类继承成员
 * 多继承即一个子类可以有多个父类，它继承了多个父类的特性。
 * 其中，访问修饰符继承方式是 public、protected、private 其中的一个，用来修饰每个基类，各个基类之间用逗号分隔。
 */
class Rectangle : public Shape, public PaintCost {
public:
    int getArea(void);
};


#endif //LEARN_RECTANGLE_H
