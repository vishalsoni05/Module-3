//4. WAP to create simple calculator using class

#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    void inputNumbers() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    void add() {
        cout << "Sum: " << num1 + num2 << endl;
    }

    void subtract() {
        cout << "Difference: " << num1 - num2 << endl;
    }

    void multiply() {
        cout << "Product: " << num1 * num2 << endl;
    }

    void divide() {
        if (num2 != 0) {
            cout << "Quotient: " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    }

};

int main() {
    Calculator calc;
    int choice;

        cout << "\nCalculator Menu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
       
      while (choice != 5){
         cout << "Enter your choice (1-5): ";
        cin >> choice;
		switch (choice) {
            case 1:
                calc.inputNumbers();
                calc.add();
                break;
            case 2:
                calc.inputNumbers();
                calc.subtract();
                break;
            case 3:
                calc.inputNumbers();
                calc.multiply();
                break;
            case 4:
                calc.inputNumbers();
                calc.divide();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please choose again.\n";
        }
}
    return 0;
}
