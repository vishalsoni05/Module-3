//7. Write a C++ program to implement a class called Date that has private
//member variables for day, month, and year. Include member functions to
//set and get these variables, as well as to validate if the date is valid.


#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor
    Date(int d = 1, int m = 1, int y = 2000) {
        setDay(d);
        setMonth(m);
        setYear(y);
    }

    // Setter functions
    void setDay(int d) {
        if (d >= 1 && d <= 31) {
            day = d;
        } else {
            cout << "Invalid day. Day must be between 1 and 31." << endl;
        }
    }

    void setMonth(int m) {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
            cout << "Invalid month. Month must be between 1 and 12." << endl;
        }
    }

    void setYear(int y) {
        if (y >= 1) {
            year = y;
        } else {
            cout << "Invalid year. Year must be positive." << endl;
        }
    }

    // Getter functions
    int getDay()  {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear()  {
        return year;
    }

    // Validate date
    bool isValidDate()  {
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                return day <= 29;
            } else {
                return day <= 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            return day <= 30;
        } else {
            return day <= 31;
        }
    }

    // Display date
    void displayDate() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    // Create Date object
    Date date(29, 2, 2024);

    // Validate date
    if (date.isValidDate()) {
        cout << "Date is valid." << endl;
        date.displayDate();
    } else {
        cerr << "Date is invalid." << endl;
    }

    return 0;
}

