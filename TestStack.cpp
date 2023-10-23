#include "Stack.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    Stack stack(5);

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top element:" << stack.top() << std::endl;

    stack.pop();
    stack.pop();

    std::cout << "top element after pop:" << stack.top() << std::endl;

    stack.pop();

    int elements = 10;
    Stack s(elements);

    for (int j = 1; j < elements + 1; j++) {
        if (s.push(j)) {
            std::cout << "element pushed:" << s.top() << std::endl;
        } else {
            std::cout << "Failed to push element: Stack is full." << std::endl;
        }
    }

    for (int i = 0; i < elements - 5; i++) {
        if (s.pop()) {
            std::cout << "element popped:" << s.top() << std::endl;
        } else {
            std::cout << "Failed to pop element: Stack is empty." << std::endl;
        }
    }
    std::cout << "top element after pop:" << s.top() << std::endl;

    return 0;
}
