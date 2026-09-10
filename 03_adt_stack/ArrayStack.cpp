//
// Created by Sean Valenzuela on 9/10/26.
//

#include "ArrayStack.h"

#include <iostream>
#include <ostream>

void ArrayStack::push(int value) {
    if (isFull()) {
        std::cout << "Stack is full, cannot push" << std::endl;
        return;
    }

    topIndex++;
    data[topIndex] = value;
}

int ArrayStack::pop() {
    if (isEmpty()) {
        std::cout << "Stack is empty, cannot pop" << std::endl;
        return -1;
    }

    int value = data[topIndex];
    topIndex--;
    return value;
}

int ArrayStack::peek() const {
    if (isEmpty()) {
        std::cout << "Stack is empty, cannot peek" << std::endl;
        return -1;
    }

    return data[topIndex];
}

bool ArrayStack::isEmpty() const {
    if (topIndex == -1) {
        return true;
    } else {
        return false;
    }
}

bool ArrayStack::isFull() const {
    if (topIndex == 99) {
        return true;
    } else {
        return false;
    }
}

int ArrayStack::size() const {
    return topIndex + 1;
}

