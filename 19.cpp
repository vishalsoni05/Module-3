//3. Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)

#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;

public:
    // Constructor
    Person(string n = "", int a = 0) {
        name = n;
        age = a;
    }

    // Setter functions
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    // Getter functions
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    // Display data
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    float percentage;

public:
    // Constructor
    Student(string n = "", int a = 0, float p = 0.0) : Person(n, a) {
        percentage = p;
    }

    // Setter function
    void setPercentage(float p) {
        percentage = p;
    }

    // Getter function
    float getPercentage() {
        return percentage;
    }

    // Display data
    void displayStudent() {
        displayPerson();
        cout << "Percentage: " << percentage << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    float salary;

public:
    // Constructor
    Teacher(string n = "", int a = 0, float s = 0.0) : Person(n, a) {
        salary = s;
    }

    // Setter function
    void setSalary(float s) {
        salary = s;
    }

    // Getter function
    float getSalary() {
        return salary;
    }

    // Display data
    void displayTeacher() {
        displayPerson();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Create Student object
    Student student("John", 20, 85.5);
    cout << "Student Information:" << endl;
    student.displayStudent();

    // Create Teacher object
    Teacher teacher("Smith", 35, 50000.0);
    cout << "\nTeacher Information:" << endl;
    teacher.displayTeacher();

    return 0;
}
