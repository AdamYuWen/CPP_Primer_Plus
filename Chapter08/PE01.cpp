// Programming Exercise 8.1
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

static int timesCalled = 0;

void printString(const string* ptrStr, int num = 0);

int main() {
	string inputString;
    int times;

    cout << "Enter a string: ";
    getline(cin, inputString);
    cout << "Enter a number of times: ";
    while (cin >> times) {
        if (times == 0) {
            // Use the default argument.
            // It will be print once.
            printString(&inputString);
        }
        else {
            printString(&inputString, times);
        }
        cout << "Enter another number of times: ";
        cin.get();
    }

    return 0;
}

void printString(const string* ptrStr, int num) {
    // The number of times the string is printed
    // is not equal to the value of the second
    // argument; it is equal to the number of
    // times the function has been called.
    ++timesCalled;
    if (num == 0) {
        cout << *ptrStr << endl;
    }
    else {
        for (int i = 0; i < timesCalled; ++i) {
            cout << *ptrStr << endl;
        }
    }

}