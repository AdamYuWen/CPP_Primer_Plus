// Programming Exercise 8.5
#include <iostream>

using std::cout;

const int size = 5;

template <typename T>
T max5(const T arr[]);

int main() {
	int testInt[size] = { 1, 5, 4, 3, 2 };
    double testDouble[size] = { 1.1, 5.5, 4.4, 3.3, 2.2 };

    cout << "The largest number for the array of five int is "
         << max5(testInt) << ".\n";

    cout << "The largest number for the array of five doulbe is "
         << max5(testDouble) << ".\n";

    return 0;
}

template <typename T>
T max5(const T arr[]) {
    T maxNum = arr[0];
    for (int i = 0; i < size; ++i) {
        maxNum = maxNum > arr[i] ? maxNum : arr[i];
    }
    return maxNum;
}