//
//  main.cpp
//  Array Sum and Average
//
//  Created by KRISHNA RAJPOPAT on 27/04/25.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    
    // Calculate sum of the elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate average
    double average = static_cast<double>(sum) / n;
    
    cout << "Sum of the elements: " << sum << endl;
    cout << "Average of the elements: " << average << endl;
    
    return 0;
}

