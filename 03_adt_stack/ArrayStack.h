//
// Created by Sean Valenzuela on 9/10/26.
//

#ifndef CS210_CPP_INTRO_ARRAYSTACK_H
#define CS210_CPP_INTRO_ARRAYSTACK_H

class ArrayStack {
public:
    ArrayStack();
    void push(int value);
    int pop();
    int peek() const;
    bool isEmpty() const;
    bool isFull() const;
    int size() const;

private:
    int data[100];
    int topIndex;
};

#endif //CS210_CPP_INTRO_ARRAYSTACK_H
