//7. Write a C++ Program to illustrates the use of Constructors in multilevel
//inheritance

#include <iostream>
using namespace std;

// Base class GrandParent
class GrandParent {
public:
    GrandParent() {
        cout << "GrandParent constructor called" << endl;
    }

    GrandParent(int x) {
        cout << "GrandParent parameterized constructor called with value " << x << endl;
    }
};

// Intermediate class Parent
class Parent : public GrandParent {
public:
    Parent() {
        cout << "Parent constructor called" << endl;
    }

    Parent(int x, int y) : GrandParent(x) {
        cout << "Parent parameterized constructor called with value " << y << endl;
    }
};

// Derived class Child
class Child : public Parent {
public:
    Child() {
        cout << "Child constructor called" << endl;
    }

    Child(int x, int y, int z) : Parent(x, y) {
        cout << "Child parameterized constructor called with value " << z << endl;
    }
};

int main() {
    // Create Child object using default constructor
    Child child1;
    cout << endl;

    // Create Child object using parameterized constructor
    Child child2(10, 20, 30);
    return 0;
}
