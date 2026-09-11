#include <iostream>
#include "Stack.h"

Stack::Stack() {
    topIndex = -1;
}

void Stack::push(int value) {
    if (isFull()) {
        std::cout << "Stack is full, cannot push" << std::endl;
        return;
    }
    topIndex++;
    data[topIndex] = value;
}

int Stack::pop() {
    if (isEmpty()) {
        std::cout << "Stack is empty, cannot pop" << std::endl;
        return -1;
    }
    int value = data[topIndex];
    topIndex--;
    return value;
}

int Stack::peek() const {
    if (isEmpty()) {
        std::cout << "Stack is empty, cannot peek" << std::endl;
        return -1;
    }
    return data[topIndex];
}

bool Stack::isEmpty() const {
    if (topIndex == -1) {
        return true;
    } else {
        return false;
    }
}

bool Stack::isFull() const {
    if (topIndex == 99) {
        return true;
    } else {
        return false;
    }
}

int Stack::size() const {
    return topIndex + 1;
}