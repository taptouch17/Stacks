//
//  Stack.cpp
//  Stacks
//
//  Created by Jelani on 18/05/2017.
//  Copyright © 2017 Tap. TOUCH. All rights reserved.
//

#include "Stack.hpp"
#include <iostream>

using namespace std;

Stack::Stack() {
    top=-1;
}


// Push on stack
void Stack::push(int a) {
    top++;              // increment top of stack first
    if (top < MAX) {           // check if top is more than the MAX allowing in array
        arr[top] = a;       //  assign value ovf top of array to the value of a
    }
    else {                  // Carried out if stack is full
        cout << "STACK IS FULL. DAMN IT" << endl;
        top--;
    }
}

// Pop off of top of stack
int Stack::pop() {
    
    if (top == -1) {        // If stack is empty.
        cout << " STACK IS EMPTY. DAMN IT" << endl;
        return NULL;
    }
    else {
        data = arr[top]; // assign number of values in arr to data
        arr[top] = NULL; // assign null to number of values in arr
        top--; // decrement top by 1
        return data; // return previous top
    }
}

bool Stack::isEmpty(){
    return top <= -1;
}
