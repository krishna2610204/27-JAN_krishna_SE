//
//  main.cpp
//  variables and constants
//
//  Created by KRISHNA RAJPOPAT on 23/04/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    const float pi = 3.14;
    float r , circle;
    cout<<"Enter value of Radius:";
    cin>>r;
    
    circle = pi * r * r;
    cout<<"Circumference of circle:"<<circle;
    

    return 0;
}
