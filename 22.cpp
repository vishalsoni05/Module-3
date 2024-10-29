//6. Write a C++ Program to show access to Private Public and Protected using
//Inheritance

#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    // Constructor
    Base(int pv = 0, int ptv = 0, int pbv = 0) {
        privateVar = pv;
        protectedVar = ptv;
        publicVar = pbv;
    }

    // Public function to access private member
    void displayPrivate() {
        cout << "Private Var: " << privateVar << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Constructor
    Derived(int pv = 0, int ptv = 0, int pbv = 0) : Base(pv, ptv, pbv) {}

    // Accessing protected member
    void displayProtected() {
        cout << "Protected Var: " << protectedVar << endl;
    }

    // Accessing public member
    void displayPublic() {
        cout << "Public Var: " << publicVar << endl;
    }
};

int main() {
    // Create Derived object
    Derived derived(10, 20, 30);

    // Accessing public members
    cout << "Public Var: " << derived.publicVar << endl;
    derived.displayPrivate();
    derived.displayProtected();
    derived.displayPublic();

    // Trying to access private member directly (Error)
    // cout << "Private Var: " << derived.privateVar << endl;

    // Trying to access protected member directly (Error)
    // cout << "Protected Var: " << derived.protectedVar << endl;

    return 0;
}
