//
//  main.cpp
//  Stacks
//
//  Created by Jelani on 18/05/2017.
//  Copyright © 2017 Tap. TOUCH. All rights reserved.
//

#include <iostream>
#include "Stack.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    Stack a;
    a.push(10);
    cout << "10 pushed" << endl;
    a.push(15);
    cout << "15 pushed" << endl;
    a.push(25);
    cout << "25 pushed" << endl;
    
    cout << a.pop() << " popped" << endl;
    cout << a.pop() << " popped" << endl;
    cout << a.pop() << " popped" << endl;
    cout << a.pop() << " popped" << endl;
    
    cout << a.isEmpty() << endl;
    
    return 0;
}
