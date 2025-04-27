//
//  main.cpp
//  Assesment
//
//  Created by KRISHNA RAJPOPAT on 27/04/25.
//

#include <iostream>
#include <string>
using namespace std;

// Class representing a Food Item
class FoodItem {
public:
    string name;
    double price;

    FoodItem(string n, double p) {
        name = n;
        price = p;
    }
};

// Class representing the Order
class Order {
private:
    string customerName;
    double totalBill;

public:
    Order(string name) {
        customerName = name;
        totalBill = 0;
    }

    void addItem(FoodItem item, int quantity) {
        double cost = item.price * quantity;
        totalBill += cost;
        cout << quantity << " x " << item.name << " = ₹" << cost << endl;
    }

    void displayBill() {
        cout << "\n--- Bill for " << customerName << " ---\n";
        cout << "Total Amount: ₹" << totalBill << endl;
        cout << "---------------------------\n";
    }
};

// Function to display the Menu
void displayMenu() {
    cout << "\n--- Food Menu ---\n";
    cout << "1. Burger - ₹149\n";
    cout << "2. Pizza - ₹299\n";
    cout << "3. Sandwich - ₹99\n";
    cout << "4. Pasta - ₹199\n";
    cout << "5. Exit\n";
    cout << "-----------------\n";
}

// Function to get the Food Item based on user's choice
FoodItem getItem(int choice) {
    switch(choice) {
        case 1: return FoodItem("Burger", 149);
        case 2: return FoodItem("Pizza", 299);
        case 3: return FoodItem("Sandwich", 99);
        case 4: return FoodItem("Pasta", 199);
        default: return FoodItem("Invalid", 0);
    }
}

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    Order order(name);

    int choice, quantity;
    char continueOrder;

    do {
        displayMenu();
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 5) {
            break; // Exit if user chooses 5
        }

        FoodItem selectedItem = getItem(choice);

        if (selectedItem.price == 0) {
            cout << "Invalid choice. Please try again.\n";
            continue;
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        order.addItem(selectedItem, quantity);

        cout << "Do you want to order more? (y/n): ";
        cin >> continueOrder;

    } while (continueOrder == 'y' || continueOrder == 'Y');

    order.displayBill();

    cout << "Thank you for ordering!\n";

    return 0;
}
