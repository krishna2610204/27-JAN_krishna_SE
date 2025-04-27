//
//  main.cpp
//  right angled triangle
//
//  Created by KRISHNA RAJPOPAT on 27/04/25.
//

#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows for the triangle: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {         
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
