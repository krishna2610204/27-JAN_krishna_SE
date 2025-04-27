//
//  main.cpp
//  Class for Bank Account
//
//  Created by KRISHNA RAJPOPAT on 27/04/25.
//

#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount(float initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Invalid initial balance. Setting balance to 0.\n";
        }
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive.\n";
        }
    }

    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdraw amount or insufficient funds.\n";
        }
    }

    void displayBalance() const {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    float initialBalance, depositAmount, withdrawAmount;

    cout << "Enter initial balance: ";
    cin >> initialBalance;

    BankAccount account(initialBalance);

    account.displayBalance();

  
    cout << "Enter amount to deposit: ";
    cin >> depositAmount;
    account.deposit(depositAmount);

    
    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    
    account.displayBalance();

    return 0;
}
