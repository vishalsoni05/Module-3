//7. Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l = 0.0, double w = 0.0) {
        length = l;
        width = w;
    }

    // Getter functions
    double getLength(){
        return length;
    }

    double getWidth(){
        return width;
    }

    // Setter functions
    void setLength(double l) {
        if (l >= 0) {
            length = l;
        } else {
            cout << "Invalid length. Length cannot be negative." << endl;
        }
    }

    void setWidth(double w) {
        if (w >= 0) {
            width = w;
        } else {
            cout << "Invalid width. Width cannot be negative." << endl;
        }
    }

    // Calculate area
    double calculateArea() const {
        return length * width;
    }

    // Calculate perimeter
    double calculatePerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    // Create Rectangle object
    Rectangle rectangle(5.0, 3.0);

    // Display rectangle's dimensions, area, and perimeter
    cout << "Length: " << rectangle.getLength() << endl;
    cout << "Width: " << rectangle.getWidth() << endl;
    cout << "Area: " << rectangle.calculateArea() << endl;
    cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;

    // Update dimensions and recalculate area and perimeter
    rectangle.setLength(8.0);
    rectangle.setWidth(4.0);
    cout << "\nUpdated Length: " << rectangle.getLength() << endl;
    cout << "Updated Width: " << rectangle.getWidth() << endl;
    cout << "Updated Area: " << rectangle.calculateArea() << endl;
    cout << "Updated Perimeter: " << rectangle.calculatePerimeter() << endl;

    return 0;
}
