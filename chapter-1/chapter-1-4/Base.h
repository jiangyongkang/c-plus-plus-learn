/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/13
 * Common: 类的访问修饰符
 */

#ifndef LEARN_BASE_H
#define LEARN_BASE_H


/**
 * 数据隐藏是面向对象编程的一个重要特点，它防止函数直接访问类类型的内部成员。
 * 类成员的访问限制是通过在类主体内部对各个区域标记 public、private、protected 来指定的。
 * 关键字 public、private、protected 称为访问说明符。
 * 一个类可以有多个 public、protected 或 private 标记区域。
 * 每个标记区域在下一个标记区域开始之前或者在遇到类主体结束右括号之前都是有效的。
 * 成员和类的默认访问修饰符是 private。
 */
class Base {
    /**
     * 私有成员变量或函数在类的外部是不可访问的，甚至是不可查看的。只有类和友元函数可以访问私有成员。
     * 默认情况下，类的所有成员都是私有的。
     */
private:
    double length;
    double width;

    /**
     * 公有成员在程序中类的外部是可访问的。
     */
public:
    double getLength();

    double getWidth();

    double setLength(double length);

    double setWidth(double width);

    /**
     * 保护成员变量或函数与私有成员十分相似，但有一点不同，保护成员在派生类（即子类）中是可访问的。
     */
protected:
    double breadth;
};


#endif //LEARN_BASE_H
