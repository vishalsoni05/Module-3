//5. Write a C++ program to create a class called Triangle that has private
//member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene.


#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    // Constructor
    Triangle(double s1 = 0, double s2 = 0, double s3 = 0) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Setter function
    void setSides(double s1, double s2, double s3) {
        if (s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2) {
            side1 = s1;
            side2 = s2;
            side3 = s3;
        } else {
            cout << "Invalid triangle sides. Sum of any two sides must be greater than the third side." << endl;
        }
    }

    // Determine triangle type
    string getTriangleType() const {
        if (side1 == side2 && side2 == side3) {
            return "Equilateral";
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            return "Isosceles";
        } else {
            return "Scalene";
        }
    }

    // Display triangle sides
    void displaySides() const {
        cout << "Side 1: " << side1 << endl;
        cout << "Side 2: " << side2 << endl;
        cout << "Side 3: " << side3 << endl;
    }
};

int main() {
    // Create Triangle object
    Triangle triangle;

    // Set triangle sides
    triangle.setSides(5, 5, 5);
    //triangle.setSides(4, 5, 5);
    //triangle.setSides(3, 4, 5);

    // Display triangle sides
    triangle.displaySides();

    // Determine triangle type
    cout << "Triangle Type: " << triangle.getTriangleType() << endl;

    return 0;
}
