//8. Write a program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading

#include <iostream>
using namespace std;

class MathOperation {
public:
    // Function overloading for addition
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    // Function overloading for subtraction
    int subtract(int a, int b) {
        return a - b;
    }

    float subtract(float a, float b) {
        return a - b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    // Function overloading for multiplication
    int multiply(int a, int b) {
        return a * b;
    }

    float multiply(float a, float b) {
        return a * b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    // Function overloading for division
    float divide(int a, int b) {
        if (b == 0) {
            throw "Division by zero!";
        }
        return (float)a / b;
    }

    float divide(float a, float b) {
        if (b == 0) {
            throw "Division by zero!";
        }
        return a / b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            throw "Division by zero!";
        }
        return a / b;
    }
};

int main() {
    MathOperation math;

    // Addition
    cout << "Addition:" << endl;
    cout << "2 + 3 = " << math.add(2, 3) << endl;
    cout << "2.5 + 3.7 = " << math.add(2.5f, 3.7f) << endl;
    cout << "2.5 + 3.7 = " << math.add(2.5, 3.7) << endl;

    // Subtraction
    cout << "\nSubtraction:" << endl;
    cout << "5 - 2 = " << math.subtract(5, 2) << endl;
    cout << "5.9 - 2.1 = " << math.subtract(5.9f, 2.1f) << endl;
    cout << "5.9 - 2.1 = " << math.subtract(5.9, 2.1) << endl;

    // Multiplication
    cout << "\nMultiplication:" << endl;
    cout << "4 * 5 = " << math.multiply(4, 5) << endl;
    cout << "4.5 * 5.5 = " << math.multiply(4.5f, 5.5f) << endl;
    cout << "4.5 * 5.5 = " << math.multiply(4.5, 5.5) << endl;

    // Division
    cout << "\nDivision:" << endl;
    try {
        cout << "10 / 2 = " << math.divide(10, 2) << endl;
        cout << "10.5 / 2.5 = " << math.divide(10.5f, 2.5f) << endl;
        cout << "10.5 / 2.5 = " << math.divide(10.5, 2.5) << endl;
        cout << "10 / 0 = " << math.divide(10, 0) << endl; // Division by zero
    } catch (const char* e) {
        cout << e << endl;
    }

    return 0;
}


