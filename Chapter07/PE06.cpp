// Programming Exercise 7.6
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int arrSize = 10;

int Fill_array(double arr[], int size);
void Show_array(const double arr[], int size);
void Reverse_array(double arr[], int size);

int main() {
    double testArr[arrSize];

    // Fill an array
    int testArrSize = Fill_array(testArr, arrSize);
    cout << "The size of the input array is " << testArrSize << ".\n";

    // Show the array
    Show_array(testArr, testArrSize);

    // Reverse the array
    Reverse_array(testArr, testArrSize);

    // Show the array
    cout << "After reversing the array:" << endl;
    Show_array(testArr, testArrSize);

    // Reverse all but the first and last elements of the array
    Reverse_array(testArr + 1, testArrSize - 2);

    // Show the array
    cout << "After reversing all but the first and last element "
         << "of the array:\n";
    Show_array(testArr, testArrSize);

    return 0;
}

int Fill_array(double arr[], int size) {
    int i;
    for (i = 0; i < size; ++i) {
        int temp;
        cout << "Enter value #" << i + 1 << ": ";
        if (cin >> temp) {
            arr[i] = temp;
        }
        else {
            break;
        }
    }
    return i;
}

void Show_array(const double arr[], int size) {
    cout << "The array is ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Reverse_array(double arr[], int size) {
    for (int i = 0, j = size - 1; i < j; ++i, --j) {
        double temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
}