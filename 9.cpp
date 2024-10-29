//9. Write a programto find the multiplication values and the cubic values using
//inline function


#include <iostream>
using namespace std;

// Inline function to calculate multiplication
 int multiply(int a, int b) {
    return a * b;
}

// Inline function to calculate cubic value
int cubic(int num) {
    return num * num * num;
}

int main() {
    int num1, num2, num;

    // Input numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter a number to calculate its cubic: ";
    cin >> num;

    // Calculate multiplication
    int product = multiply(num1, num2);

    // Calculate cubic
    int cube = cubic(num);

    // Display results
    cout << "\nMultiplication of " << num1 << " and " << num2 << ": " << product << endl;
    cout << "Cubic of " << num << ": " << cube << endl;

    return 0;
}
