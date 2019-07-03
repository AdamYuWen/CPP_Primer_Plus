// Programming Exercise 7.5
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

long double factorial(int num);

int main() {
    int num;
    cout << "Enter an integer for its factorial: ";
    while (cin >> num) {
        cout << num << "! = " << factorial(num) << endl;
        cout << "Enter another integer: ";
    }

    return 0;
}

long double factorial(int num) {
    if (num == 0) {
        return 1;
    }

    return num * factorial(num - 1);
}