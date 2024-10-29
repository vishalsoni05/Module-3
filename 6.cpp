//6. Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.

#include <iostream>
#include <cmath>

using namespace std;

// Define constants
const float PI = 3.14159;

// Circle class definition
class Circle {
private:
    float radius;  // Private member variable for radius

public:
    // Constructor to initialize radius
    Circle(float r = 0.0) : radius(r) {}

    // Member function to calculate circle's area
    float calculateArea(){
        return PI * radius * radius;
    }

    // Member function to calculate circle's circumference
    float calculateCircumference(){
        return 2 * PI * radius;
    }

    // Getter function for radius
    float getRadius(){
        return radius;
    }

    // Setter function for radius
    void setRadius(float r) {
        if (r >= 0) {
            radius = r;
        } else {
            cout << "Invalid radius. Radius cannot be negative." << endl;
        }
    }
};

int main() {
    // Create a Circle object
    Circle circle(5.0);

    // Display circle's radius, area, and circumference
    cout << "Radius: " << circle.getRadius() << endl;
    cout << "Area: " << circle.calculateArea() << endl;
    cout << "Circumference: " << circle.calculateCircumference() << endl;

    // Update radius and recalculate area and circumference
    circle.setRadius(10.0);
    cout << "\nUpdated Radius: " << circle.getRadius() << endl;
    cout << "Updated Area: " << circle.calculateArea() << endl;
    cout << "Updated Circumference: " << circle.calculateCircumference() << endl;

    return 0;
}

