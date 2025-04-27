//
//  main.cpp
//  Variable Scope
//
//  Created by KRISHNA RAJPOPAT on 27/04/25.
//

#include <iostream>
using namespace std;

int globalVar = 10;

void displayLocal() {
    int localVar = 20;
    cout << "Local variable inside function: " << localVar << endl;
}

void displayGlobal() {
    cout << "Global variable inside function: " << globalVar << endl;
}

int main() {
    displayLocal();
    displayGlobal();
    cout << "Global variable inside main: " << globalVar << endl;
    return 0;
}

