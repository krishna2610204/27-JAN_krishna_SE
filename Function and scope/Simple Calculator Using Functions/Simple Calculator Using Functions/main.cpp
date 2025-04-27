//
//  main.cpp
//  Simple Calculator Using Functions
//
//  Created by KRISHNA RAJPOPAT on 27/04/25.
//

#include <iostream>
using namespace std;

// Function for addition
float add(float a, float b) {
    return a + b;
}

// Function for subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function for multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function for division
float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;  // Return 0 if division by zero occurs
    }
}

// Function to get user input and call the appropriate operation
void getOperationAndPerform() {
    float num1, num2;
    int choice;

    // Ask for user input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Ask for operation choice
    cout << "\nSelect operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter your choice (1/2/3/4): ";
    cin >> choice;

    // Call the appropriate function based on user input
    if (choice == 1) {
        cout << "Result: " << add(num1, num2) << endl;
    } else if (choice == 2) {
        cout << "Result: " << subtract(num1, num2) << endl;
    } else if (choice == 3) {
        cout << "Result: " << multiply(num1, num2) << endl;
    } else if (choice == 4) {
        float result = divide(num1, num2);
        if (num2 != 0) {
            cout << "Result: " << result << endl;
        }
    } else {
        cout << "Invalid choice!" << endl;
    }
}

int main() {
    // Call the function to get input and perform operation
    getOperationAndPerform();
    return 0;
}

