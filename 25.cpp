//9. Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;

const int SIZE = 5;

class Matrix {
private:
    int arr[SIZE];

public:
    // Constructor
    Matrix() {
        for (int i = 0; i < SIZE; i++) {
            arr[i] = 0;
        }
    }

    // Overload [] operator for array-like access
    int& operator[](int index) {
        return arr[index];
    }

    // Overload [] operator for const array-like access
    const int& operator[](int index) const {
        return arr[index];
    }

    // Overload + operator for matrix addition
    Matrix operator+(const Matrix& other) const {
        Matrix result;
        for (int i = 0; i < SIZE; i++) {
            result[i] = arr[i] + other[i];
        }
        return result;
    }

    // Overload << operator for printing matrix
    friend ostream& operator<<(ostream& os, const Matrix& matrix) {
        for (int i = 0; i < SIZE; i++) {
            os << matrix[i] << " ";
        }
        return os;
    }
};

int main() {
    Matrix matrix1, matrix2, result;

    cout << "Enter elements for Matrix 1:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> matrix1[i];
    }

    cout << "Enter elements for Matrix 2:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> matrix2[i];
    }

    result = matrix1 + matrix2; // Perform matrix addition using overloaded + operator

    cout << "Matrix 1: " << matrix1 << endl;
    cout << "Matrix 2: " << matrix2 << endl;
    cout << "Result (Matrix 1 + Matrix 2): " << result << endl;

    return 0;
}
