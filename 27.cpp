//11.Write a program to calculate the area of circle, rectangle and triangle
//using Function Overloading
//Rectangle: Area * breadth
//Triangle: ½ *Area* breadth
//Circle: Pi * Area *Area


#include <iostream>
using namespace std;
const float PI = 3.14159;

class Shape {
public:
    // Function overloading for rectangle area
    float area(float length, float breadth) {
        return length * breadth;
    }

    // Function overloading for triangle area
    float area(float base, float height, char type) {
        if (type == 't' || type == 'T')
            return 0.5 * base * height;
        else
            return 0.0;
    }

    // Function overloading for circle area
    float area(float radius, char type) {
        if (type == 'c' || type == 'C')
            return PI * radius * radius;
        else
            return 0.0;
    }
};

int main() {
    Shape shape;

    float length, breadth, base, height, radius;

    cout << "Rectangle Area: " << endl;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
    cout << "Rectangle Area: " << shape.area(length, breadth) << endl;

    cout << "\nTriangle Area: " << endl;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height;
    cout << "Triangle Area: " << shape.area(base, height, 't') << endl;

    cout << "\nCircle Area: " << endl;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Circle Area: " << shape.area(radius, 'c') << endl;

    return 0;
}
