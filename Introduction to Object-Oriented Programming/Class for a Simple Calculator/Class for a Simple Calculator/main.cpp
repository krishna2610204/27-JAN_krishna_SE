//
//  main.cpp
//  Class for a Simple Calculator
//
//  Created by KRISHNA RAJPOPAT on 27/04/25.
//

#include <iostream>
using namespace std;

// Define the Calculator class
class Calculator {
public:
    // Addition
    float add(float a, float b) {
        return a + b;
    }

    // Subtraction
    float subtract(float a, float b) {
        return a - b;
    }

    // Multiplication
    float multiply(float a, float b) {
        return a * b;
    }

    // Division
    float divide(float a, float b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

// Main function to use the Calculator class
int main() {
    Calculator calc;
    float num1 = 10, num2 = 5;

    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    cout << "Division: " << calc.divide(num1, num2) << endl;

    return 0;
}

