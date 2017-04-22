/**
 * Created by CLion.
 * User: vincent
 * Date: 2017/4/22
 * Common:
 */

#include <iostream>
#include <vector>
#include "Stack.h"
using namespace std;

template<class T>
void Stack<T>::push(T const &element) {
    elements.push_back(element);
}

template<class T>
void Stack<T>::pop() {
    if (elements.empty()) {
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    elements.pop_back();
}

template<class T>
T Stack<T>::top() const {
    if (elements.empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    return elements.back();
}

template<class T>
bool Stack<T>::empty() const {
    return elements.empty();
}


