//12.Write a programto swap the two numbers using friend function
//without using third variable

#include <iostream>
using namespace std;

class Swap {
private:
    int num1, num2;

public:
    // Constructor
    Swap(int n1 = 0, int n2 = 0) {
        num1 = n1;
        num2 = n2;
    }

    // Friend function to swap numbers
    friend void swapNumbers(Swap& s) {
        s.num1 = s.num1 + s.num2;
        s.num2 = s.num1 - s.num2;
        s.num1 = s.num1 - s.num2;
    }

    // Display numbers
    void display() {
        cout << "Num1: " << num1 << endl;
        cout << "Num2: " << num2 << endl;
    }
};

int main() {
    Swap swap(10, 20);

    cout << "Before Swap:" << endl;
    swap.display();

    swapNumbers(swap);

    cout << "\nAfter Swap:" << endl;
    swap.display();

    return 0;
}

