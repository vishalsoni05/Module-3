//3. Write a C++ program to create a class called Car that has private
//member variables for company, model, and year. Implement member
//functions to get and set these variables.


#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    // Constructor
    Car(string c = "", string m = "", int y = 0) {
        company = c;
        model = m;
        year = y;
    }

    // Getter functions
    string getCompany(){
        return company;
    }

    string getModel(){
        return model;
    }

    int getYear(){
        return year;
    }

    // Setter functions
    void setCompany(string c) {
        company = c;
    }

    void setModel(string m) {
        model = m;
    }

    void setYear(int y) {
        if (y >= 0) {
            year = y;
        } else {
            cout << "Invalid year. Year cannot be negative." << endl;
        }
    }

    // Display car information
    void displayInfo() const {
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Create Car object
    Car car;

    // Set car information
    car.setCompany("Toyota");
    car.setModel("Camry");
    car.setYear(2022);

    // Display car information
    car.displayInfo();

    // Update car information
    car.setCompany("Honda");
    car.setModel("Civic");
    car.setYear(2024);

    cout << "\nUpdated Information:" << endl;
    car.displayInfo();

    return 0;
}

