//
//  main.cpp
//  Grade Calculator
//
//  Created by KRISHNA RAJPOPAT on 24/04/25.
//

#include <iostream>
using namespace std;

int main() {
    int mark1, mark2, mark3, mark4;
    int totalMarks;
    int obtainedMarks;
    float percentage;
    char grade;

    // Taking input
    cout << "Enter marks for Subject 1: ";
    cin >> mark1;
    cout << "Enter marks for Subject 2: ";
    cin >> mark2;
    cout << "Enter marks for Subject 3: ";
    cin >> mark3;
    cout << "Enter marks for Subject 4: ";
    cin >> mark4;

    cout << "Enter total marks: ";
    cin >> totalMarks;

    // Calculating obtained marks and percentage
    obtainedMarks = mark1 + mark2 + mark3 + mark4;
    percentage = (obtainedMarks * 100.0) / totalMarks;

    // Determining grade using if-else
    if (percentage >= 90) {
        grade = 'A';
    }
    else if (percentage >= 80) {
        grade = 'B';
    }
    else if (percentage >= 70) {
        grade = 'C';
    }
    else if (percentage >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    // Output the results
    cout << "\nTotal Marks Obtained: " << obtainedMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
