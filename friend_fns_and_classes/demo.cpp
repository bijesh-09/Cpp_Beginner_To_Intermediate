#include<iostream>
using namespace std;

class Student {
    int roll;
    string name;
    
public:
    // Default constructor
    Student() {
        roll = 0;
        name = "Unknown";
        cout << "Default constructor called" << endl;
    }
    
    // Parameterized constructor
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized constructor called" << endl;
    }
    
    // Copy constructor
    // Student(const Student &s) {
    //     roll = s.roll;
    //     name = s.name;
    //     cout << "Copy constructor called" << endl;
    // }
    
    // Assignment operator overloading
    Student& operator=(const Student &s) {
        cout << "Assignment operator called" << endl;
        if (this != &s) {  // Check for self-assignment
            roll = s.roll;
            name = s.name;
        }
        return *this;
    }
    
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    cout << "Creating s1 using parameterized constructor:" << endl;
    Student s1(101, "Ram");
    s1.display();
    
    // cout << "\nCreating s2 using copy constructor:" << endl;
    // Student s2 = s1;  // Copy constructor called
    // s2.display();
    
    cout << "\nCreating s3 using default constructor:" << endl;
    Student s3;
    s3.display();
    
    cout << "\nUsing assignment operator:" << endl;
    s3 = s1;  // Assignment operator called
    s3.display();
    
    return 0;
}