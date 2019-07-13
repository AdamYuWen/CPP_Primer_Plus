// Programming Exercise 9.3
#include <iostream>
#include <new>
#include "placementnew.h"

using std::cin;
using std::cout;
using std::endl;

const int BUF = 1024;
const int arraySize = 2;

char buffer[BUF];

int main() {
    Chaff* ptr;
    ptr = new (buffer) Chaff[arraySize];

    // Showing the address of buffer is the same as the address of ptr
    cout << "Memory address:\n" <<  " buffer: " << (void*)buffer
         << "\n ptr:    " << ptr << endl;

    setChaff(*ptr, (char*)"Test dross", 3);
    setChaff(*(ptr + 1), (char*)"Test dross again", 10);

    cout << "Display Chaff: " << endl;
    for (int i = 0; i < arraySize; ++i) {
        cout << "The chaff #" << (i + 1) << "'s dross is "
             << (ptr + i)->dross << ".\n";
        cout << "The chaff #" << (i + 1) << "'s slag if "
             << (ptr + i)->slag << ".\n";
    }

    return 0;
}
