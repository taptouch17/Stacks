//
//  Stack.hpp
//  Stacks
//
//  Created by Jelani on 18/05/2017.
//  Copyright © 2017 Tap. TOUCH. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp
#define MAX 10

#include <stdio.h>

#endif /* Stack_hpp */


class Stack {

private:
    int arr[MAX];
    int top;
    int data;
    
public:
    Stack();
    void push(int a);
    int pop();
    bool isEmpty();
    
    
};
