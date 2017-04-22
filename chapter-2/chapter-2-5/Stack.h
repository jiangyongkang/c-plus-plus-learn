/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/22
 * Common: 类模板
 */

#ifndef LEARN_STACK_H
#define LEARN_STACK_H

#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
using namespace std;

template<class T>
class Stack {
private:
    vector<T> elements;
public:
    /**
     * 入栈
     */
    void push(T const &);

    /**
     * 出栈
     */
    void pop();

    /**
     * 返回栈顶元素
     * @return
     */
    T top() const;

    /**
     * 判断是否为空
     * @return
     */
    bool empty() const;
};


#endif //LEARN_STACK_H
