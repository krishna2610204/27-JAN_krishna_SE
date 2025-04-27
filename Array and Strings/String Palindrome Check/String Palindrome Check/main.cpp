//
//  main.cpp
//  String Palindrome Check
//
//  Created by KRISHNA RAJPOPAT on 27/04/25.
//

#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversed_str = string(str.rbegin(), str.rend());

    if (str == reversed_str) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
