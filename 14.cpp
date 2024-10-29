//6. Write a C++ program to implement a class called Employee that has
//private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee
//performance. Using of constructor



#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor
    Employee(string n, int id, double s = 0.0) {
        name = n;
        employeeID = id;
        salary = s;
    }

    // Getter functions
    string getName() const {
        return name;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    double getSalary() const {
        return salary;
    }

    // Setter function
    void setSalary(double s) {
        if (s >= 0) {
            salary = s;
        } else {
            cout << "Invalid salary. Salary cannot be negative." << endl;
        }
    }

    // Calculate salary based on performance rating (1-5)
    void calculateSalary(int performanceRating) {
        double baseSalary = 50000.0;
        double bonusPercentage;

        switch (performanceRating) {
            case 1:
                bonusPercentage = 0.05;
                break;
            case 2:
                bonusPercentage = 0.10;
                break;
            case 3:
                bonusPercentage = 0.15;
                break;
            case 4:
                bonusPercentage = 0.20;
                break;
            case 5:
                bonusPercentage = 0.25;
                break;
            default:
                cout << "Invalid performance rating. Rating must be between 1 and 5." << endl;
                return;
        }

        salary = baseSalary + (baseSalary * bonusPercentage);
    }

    // Display employee information
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Create Employee object using constructor
    Employee emp("John", 12345);

    // Calculate salary based on performance rating
    emp.calculateSalary(4);

    // Display employee information
    emp.displayInfo();

    return 0;
}
