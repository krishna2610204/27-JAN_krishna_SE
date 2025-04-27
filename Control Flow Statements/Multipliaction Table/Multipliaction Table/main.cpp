//
//  main.cpp
//  Multipliaction Table
//
//  Created by KRISHNA RAJPOPAT on 27/04/25.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int num;

        cout << "Enter a number for table: ";
        cin >> num;

        cout << "Multiplication table of " << num << ":\n";

        for (int i = 1; i <= 10; i++) {
            cout << num << " x " << i << " = " << num * i << endl;
        }
    return 0;
}
