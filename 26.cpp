//10.Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* str;

public:
    // Constructor
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Destructor
    ~String() {
        delete[] str;
    }

    // Overload + operator for string concatenation
    String operator+(const String& other) const {
        String result;
        result.str = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(result.str, str);
        strcat(result.str, other.str);
        return result;
    }

    // Overload << operator for printing string
    friend ostream& operator<<(ostream& os, const String& s) {
        os << s.str;
        return os;
    }
};

int main() {
    String str1("Hello");
    String str2("World");

    String result = str1 + str2; // Concatenate strings using overloaded + operator

    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
    cout << "Result (String 1 + String 2): " << result << endl;

    return 0;
}

