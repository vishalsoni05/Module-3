//2. Write a program of to sort the array using templates

#include <iostream>
using namespace std;

// Template function to swap values
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
//for sort
template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swapValues(arr[j], arr[j + 1]);
            }
        }
    }
}

// Template function to print array
template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {5, 2, 8, 1, 9};
    float floatArr[] = {3.5, 1.2, 4.8, 2.1};
    char charArr[] = {'A', 'C', 'B', 'D'};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);
    int charSize = sizeof(charArr) / sizeof(charArr[0]);

    cout << "Integer Array Before Sorting: ";
    printArray(intArr, intSize);
    sortArray(intArr, intSize);
    cout << "Integer Array After Sorting: ";
    printArray(intArr, intSize);

    cout << "\nFloat Array Before Sorting: ";
    printArray(floatArr, floatSize);
    sortArray(floatArr, floatSize);
    cout << "Float Array After Sorting: ";
    printArray(floatArr, floatSize);

    cout << "\nCharacter Array Before Sorting: ";
    printArray(charArr, charSize);
    sortArray(charArr, charSize);
    cout << "Character Array After Sorting: ";
    printArray(charArr, charSize);

    return 0;
}
