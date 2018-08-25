//
//  Stack.cpp
//  Stack
//
//  Created by Евгений Киримов on 24.08.2018.
//  Copyright © 2018 Евгений Киримов. All rights reserved.
//

#include "Stack.hpp"
#include <iostream>

void Stack::push(int x){
    this->vec->push_back(x);
}

int Stack::pop(){
    vector<int>::iterator iter = this->vec->end();
    int value = * (iter-1);
    vec->erase(iter-1);
    return value;
    
}

bool Stack::isEmpty(){return this->vec->empty();}

int Stack::top(){
    vector<int>::iterator iter = this->vec->end();
    return *(iter-1);
    
}

void Stack::display(){
    for(int i=0; i < this->vec->size(); i++)
        std::cout << this->vec->at(i) << endl;
}
