#include "Stack.h"
#include <iostream>
#include <cstdlib> 


Stack::Stack(int capacity)
{
    this->capacity = capacity;
    this->data = (int*)malloc(capacity * sizeof(int));

    if (this->data == nullptr) {
        std::cerr << "Memory allocation failed." << std::endl; //cerr using in throwing error exceptions 
    }

    this->topIndex = -1;
}

Stack::~Stack()
{
    free(this->data);
}

bool Stack::push(int value)
{
    if (isFull()) {
        this->capacity *=2;
        this->data =(int*)realloc(this->data, this->capacity *sizeof(int));
        if (this->data == nullptr) {
			std::cerr << "Memory allocation failed." << std::endl; //cerr using in throwing error exceptions 
		}
    }

    this->data[++topIndex] = value;
    return true;
}

bool Stack::pop()
{
    if (isEmpty()) {
        return false;
    }

    --topIndex;
    return true;
}

int Stack::top() const
{
    if (isEmpty()) {
        std::cout << "Empty" << std::endl;
        return -1;
    }
    return this->data[topIndex];
}

bool Stack::isEmpty() const
{
    return topIndex == -1;
}

bool Stack::isFull() const
{
    return topIndex == capacity - 1;
}
