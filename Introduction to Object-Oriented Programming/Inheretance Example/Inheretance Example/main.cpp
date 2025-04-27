//
//  main.cpp
//  Inheretance Example
//
//  Created by KRISHNA RAJPOPAT on 27/04/25.
//
#include <iostream>
#include <string>
using namespace std;

// Base class: Person
class Person {
protected:
    string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(string n, int a) : name(n), age(a) {}

    // Function to display person's details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    string course;

public:
    // Constructor to initialize student details
    Student(string n, int a, string c) : Person(n, a), course(c) {}

    // Function to display student details (inherits from Person and adds specific details)
    void display() {
        Person::display();  // Reuse display function of base class
        cout << "Course: " << course << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person {
private:
    string subject;

public:
    // Constructor to initialize teacher details
    Teacher(string n, int a, string s) : Person(n, a), subject(s) {}

    // Function to display teacher details (inherits from Person and adds specific details)
    void display() {
        Person::display();  // Reuse display function of base class
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create a Student object
    Student student1("Alice", 20, "Computer Science");
    cout << "Student Details:" << endl;
    student1.display();  // Calling Student's display function
    cout << endl;

    // Create a Teacher object
    Teacher teacher1("Mr. Smith", 45, "Mathematics");
    cout << "Teacher Details:" << endl;
    teacher1.display();  // Calling Teacher's display function
    cout << endl;

    return 0;
}

