//8. Write a C++ program to implement a class called Student that has private
//member variables for name, class, roll number, and marks. Include
//member functions to calculate the grade based on the marks and display
//the student's information. Accept address from each student implement
//using of aggregation


#include <iostream>
#include <string>
using namespace std;

// Address class
class Address {
private:
    string street;
    string city;
    string state;
    int pincode;

public:
    // Constructor
    Address(string s = "", string c = "", string st = "", int p = 0) {
        street = s;
        city = c;
        state = st;
        pincode = p;
    }

    // Setter functions
    void setStreet(string s) {
        street = s;
    }

    void setCity(string c) {
        city = c;
    }

    void setState(string st) {
        state = st;
    }

    void setPincode(int p) {
        pincode = p;
    }

    // Getter functions
    string getStreet()  {
        return street;
    }

    string getCity() {
        return city;
    }

    string getState() {
        return state;
    }

    int getPincode() {
        return pincode;
    }

    // Display address
    void displayAddress() {
        cout << street << ", " << city << ", " << state << " - " << pincode << endl;
    }
};

// Student class
class Student {
private:
    string name;
    int className;
    int rollNumber;
    int marks;
    Address address;

public:
    // Constructor
    Student(string n = "", int c = 0, int r = 0, int m = 0, Address a = Address()) {
        name = n;
        className = c;
        rollNumber = r;
        marks = m;
        address = a;
    }

    // Setter functions
    void setName(string n) {
        name = n;
    }

    void setClass(int c) {
        className = c;
    }

    void setRollNumber(int r) {
        rollNumber = r;
    }

    void setMarks(int m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        } else {
            cout << "Invalid marks. Marks must be between 0 and 100." << endl;
        }
    }

    void setAddress(Address a) {
        address = a;
    }

    // Getter functions
    string getName()  {
        return name;
    }

    int getClass()  {
        return className;
    }

    int getRollNumber()  {
        return rollNumber;
    }

    int getMarks()  {
        return marks;
    }

    Address getAddress()  {
        return address;
    }

    // Calculate grade
    string calculateGrade()  {
        if (marks >= 90) {
            return "A";
        } else if (marks >= 80) {
            return "B";
        } else if (marks >= 70) {
            return "C";
        } else if (marks >= 60) {
            return "D";
        } else {
            return "F";
        }
    }

    // Display student information
    void displayInfo()  {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        cout << "Address: ";
        address.displayAddress();
    }
};

int main() {
    // Create Address object
    Address address("123 Main St", "New York", "NY", 10000);

    // Create Student object
    Student student("John", 12, 1, 95, address);

    // Display student information
    student.displayInfo();

    return 0;
}

