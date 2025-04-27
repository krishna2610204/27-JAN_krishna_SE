//
//  main.cpp
//  type conversion
//
//  Created by KRISHNA RAJPOPAT on 23/04/25.
//

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    float b = a;           // Implicit conversion (int to float)

    float x = 7.8;
    int y = (int)x;        // Explicit conversion (float to int)

    cout << "\nImplicit (int to float): " << b;
    cout << "\nExplicit (float to int): " << y;

    return 0;
}
