//
//  Stack.hpp
//  Stack
//
//  Created by Евгений Киримов on 24.08.2018.
//  Copyright © 2018 Евгений Киримов. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <vector>

using namespace std;

class Stack{
private:
    vector<int>* vec = new vector<int>();
//    int top = -1;
public:
    void push(int x);
    int pop();
    bool isEmpty();
    int top();
    void display();
};


#endif /* Stack_hpp */
