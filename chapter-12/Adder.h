/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/15
 * Common: 数据抽象
 */

#ifndef LEARN_ADDER_H
#define LEARN_ADDER_H

/**
 * 接口和实现分离的编程技术
 */
class Adder {
public:
    Adder(int total = 0);      //构造函数，函数定义时可以指定默认值
    void addNum(int number);   //对外暴露的接口
    int getTotal(void);        //对外暴露的接口

private:
    int total;                 //封装的数据，外部的对象无法访问
};


#endif //LEARN_ADDER_H
