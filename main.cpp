//
//  main.cpp
//  Stack
//
//  Created by Евгений Киримов on 24.08.2018.
//  Copyright © 2018 Евгений Киримов. All rights reserved.
//

#include <iostream>
#include "Stack.hpp"
int main(int argc, const char * argv[]) {
    
    Stack* stack = new Stack();
    
    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->push(4);
    
    stack->display();
    cout << "Stack is empty: " << stack->isEmpty() << endl;
    cout << stack->pop() << endl;
    cout << stack->pop() << endl;
    cout << stack->pop() << endl;
    cout << stack->pop() << endl;
    
    cout << "Stack is empty: " << stack->isEmpty() << endl;
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
