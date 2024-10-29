//2. Write a program of Addition, Subtraction, Division, Multiplication using
//constructor.


#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    // Constructor to initialize numbers
    Calculator(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }

    // Function to perform addition
    double add() {
        return num1 + num2;
    }

    // Function to perform subtraction
    double subtract() {
        return num1 - num2;
    }

    // Function to perform multiplication
    double multiply() {
        return num1 * num2;
    }

    // Function to perform division
    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero." << endl;
            return 0;
        }
    }
};

int main() {
    double num1, num2;

    // Input numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Create Calculator object
    Calculator calc(num1, num2);

    // Perform arithmetic operations
    cout << "\nAddition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

    return 0;
}

