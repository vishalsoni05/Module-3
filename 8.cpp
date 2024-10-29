//8. Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.



#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Constructor
    Person(string n = "", int a = 0, string c = "") {
        name = n;
        age = a;
        country = c;
    }

    // Setter functions
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        if (a >= 0) {
            age = a;
        } else {
            cerr << "Invalid age. Age cannot be negative." << endl;
        }
    }

    void setCountry(string c) {
        country = c;
    }

    // Getter functions
    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    string getCountry() {
        return country;
    }

    // Display person's information
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};

int main() {
    // Create Person object
    Person person;

    // Set person's information
    person.setName("John");
    person.setAge(30);
    person.setCountry("USA");

    // Display person's information
    person.displayInfo();

    // Update person's information
    person.setName("Jane");
    person.setAge(25);
    person.setCountry("Canada");

    cout << "\nUpdated Information:" << endl;
    person.displayInfo();

    return 0;
}
