/**
 * Created by IDEA.
 * User: vincent
 * Date 2017/4/13
 * Common: 类的声明、定义、成员变量、函数
 */

#ifndef LEARN_BOX_H
#define LEARN_BOX_H

/**
 * 类定义是以关键字 class 开头，后跟类的名称。
 * 类的主体是包含在一对花括号中。类定义后必须跟着一个分号或一个声明列表。
 */
class Box {
public:
    /**
     * 关键字 public 确定了类成员的访问属性。在类对象作用域内，公共成员在类的外部是可访问的。
     */
    double length;  //长
    double breadth; //宽
    double height;  //高

    /**
     * 类的成员函数是指那些把定义和原型写在类定义内部的函数，就像类定义中的其他变量一样。
     * 类成员函数是类的一个成员，它可以操作类的任意对象，可以访问对象中的所有成员。
     * @return 体积
     */
    double getVolume(void);

    void setLength(double length);

    void setBreadth(double breadth);

    void setHeight(double height);
};


#endif //LEARN_BOX_H
