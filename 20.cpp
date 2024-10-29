//4. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
#include <string>
using namespace std;

// Base class Student
class Student {
public:
    string name;
    int rollNo;

public:
    // Constructor
    Student(string n = "", int r = 0) {
        name = n;
        rollNo = r;
    }

    // Setter functions
    void setName(string n) {
        name = n;
    }

    void setRollNo(int r) {
        rollNo = r;
    }

    // Getter functions
    string getName() {
        return name;
    }

    int getRollNo() {
        return rollNo;
    }
};

// Base class Marks
class Marks {
public:
    int math;
    int science;
    int english;

public:
    // Constructor
    Marks(int m = 0, int s = 0, int e = 0) {
        math = m;
        science = s;
        english = e;
    }

    // Setter functions
    void setMath(int m) {
        math = m;
    }

    void setScience(int s) {
        science = s;
    }

    void setEnglish(int e) {
        english = e;
    }

    // Getter functions
    int getMath() {
        return math;
    }

    int getScience() {
        return science;
    }

    int getEnglish() {
        return english;
    }
};

// Derived class MarkSheet
class MarkSheet : public Student, public Marks {
private:
    float percentage;

public:
    // Constructor
    MarkSheet(string n = "", int r = 0, int m = 0, int s = 0, int e = 0) 
        : Student(n, r), Marks(m, s, e) {
        percentage = 0.0;
    }

    // Calculate percentage
    void calculatePercentage() {
        percentage = ((getMath() + getScience() + getEnglish()) / 3.0);
    }

    // Display mark sheet
    void displayMarkSheet() {
        cout << "Name: " << getName() << endl;
        cout << "Roll No: " << getRollNo() << endl;
        cout << "Math: " << getMath() << endl;
        cout << "Science: " << getScience() << endl;
        cout << "English: " << getEnglish() << endl;
        calculatePercentage();
        cout << "Percentage: " << percentage << endl;
    }
};

int main() {
    // Create MarkSheet object
    MarkSheet markSheet("John", 1, 85, 90, 95);

    // Display mark sheet
    markSheet.displayMarkSheet();

    return 0;
}
