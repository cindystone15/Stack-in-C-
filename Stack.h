#pragma once

class Stack {
public:
    Stack(int capacity);
    ~Stack();

    bool push(int value);
    bool pop();

    int top() const;
    bool isEmpty() const;
    bool isFull() const;
    
private:
    int* data;
    int capacity;
    int topIndex;
};
