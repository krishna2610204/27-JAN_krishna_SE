//
//  main.cpp
//  Number Guessing Game
//
//  Created by KRISHNA RAJPOPAT on 27/04/25.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int secretNumber = 42; // Fixed secret number
    int guess = 0;
        int attempts = 0;

        cout << "Guess a number between 1 and 100. You have 5 chances.\n";

        while (attempts < 5) {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess == secretNumber) {
                cout << "Congratulations! You guessed it!" << endl;
                break;
            }
            else if (guess < secretNumber) {
                cout << "Too low.\n";
            }
            else {
                cout << "Too high.\n";
            }
        }

        if (guess != secretNumber) {
            cout << "Sorry, you've used all 5 chances. The number was " << secretNumber << "." << endl;
        }

        return 0;
    }
