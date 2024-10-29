//13.Write a program to find the max number from given two numbers
//using friend function


#include <iostream>
using namespace std;

class MaxFinder {
private:
    int num1, num2;

public:
    // Constructor
    MaxFinder(int n1 = 0, int n2 = 0) {
        num1 = n1;
        num2 = n2;
    }

    // Friend function to find maximum
    friend int findMax(MaxFinder mf) {
        return (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
    }

    // Set numbers
    void setNumbers(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
};

int main() {
    MaxFinder maxFinder;

    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    maxFinder.setNumbers(num1, num2);

    int maxNum = findMax(maxFinder);

    cout << "Maximum number: " << maxNum << endl;

    return 0;
}
