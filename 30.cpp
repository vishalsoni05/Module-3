//1. Write a program of to swap the two values using template

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int intNum1, intNum2;

    // Swap integers
    cout << "Enter two integers: ";
    cin >> intNum1 >> intNum2;
    cout << "Before swap: " << intNum1 << " " << intNum2 << endl;
    swapValues(intNum1, intNum2);
    cout << "After swap: " << intNum1 << " " << intNum2 << endl;
    return 0;
}
