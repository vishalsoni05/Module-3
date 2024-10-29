//2. Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;

// Base class Shape
class Shape {
public:
    int width;
    int height;

    // Constructor
    Shape(int w = 0, int h = 0) {
        width = w;
        height = h;
    }

    // Setter functions
    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

    // Pure virtual function for area calculation
    virtual int calculateArea() = 0;
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    // Constructor
    Rectangle(int w = 0, int h = 0) : Shape(w, h) {}

    // Calculate area
    int calculateArea() {
        return width * height;
    }

    // Display data
    void displayData() {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    // Create Rectangle object
    Rectangle rectangle;

    // Input data
    int w, h;
    cout << "Enter width: ";
    cin >> w;
    cout << "Enter height: ";
    cin >> h;

    rectangle.setWidth(w);
    rectangle.setHeight(h);

    // Display data
    rectangle.displayData();

    return 0;
}
