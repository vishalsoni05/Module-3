//5. Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)

#include <iostream>
using namespace std;

// Base class Student
class Student {
public:
    int rollNo;

public:
    // Constructor
    Student(int r = 0) {
        rollNo = r;
    }

    // Setter function
    void setRollNo(int r) {
        rollNo = r;
    }

    // Getter function
    int getRollNo() {
        return rollNo;
    }

    // Display roll number
    void displayRollNo() {
        cout << "Roll No: " << rollNo << endl;
    }
};

// Class Test
class Test : public Student {
public:
    int math;
    int science;

public:
    // Constructor
    Test(int r = 0, int m = 0, int s = 0) : Student(r) {
        math = m;
        science = s;
    }

    // Setter functions
    void setMath(int m) {
        math = m;
    }

    void setScience(int s) {
        science = s;
    }

    // Getter functions
    int getMath() {
        return math;
    }

    int getScience() {
        return science;
    }

    // Display marks
    void displayMarks() {
        cout << "Math: " << math << endl;
        cout << "Science: " << science << endl;
    }
};

// Derived class Result
class Result : public Test {
private:
    int total;

public:
    // Constructor
    Result(int r = 0, int m = 0, int s = 0) : Test(r, m, s) {
        total = 0;
    }

    // Calculate total
    void calculateTotal() {
        total = getMath() + getScience();
    }

    // Display result
    void displayResult() {
        displayRollNo();
        displayMarks();
        calculateTotal();
        cout << "Total: " << total << endl;
    }
};

int main() {
    // Create Result object
    Result result(1, 85, 90);

    // Display result
    result.displayResult();

    return 0;
}
