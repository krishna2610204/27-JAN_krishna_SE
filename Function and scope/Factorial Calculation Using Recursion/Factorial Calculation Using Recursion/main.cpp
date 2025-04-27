//
//  main.cpp
//  Factorial Calculation Using Recursion
//
//  Created by KRISHNA RAJPOPAT on 27/04/25.
//

#include <iostream>
using namespace std;

int factorial(int n) {
    // Base case: If n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    cout << "Enter a number to calculate its factorial: ";
    cin >> num;


    if (num < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } else {
        
        cout << "The factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}

