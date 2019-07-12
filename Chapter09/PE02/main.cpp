// Programming Exercise 9.2
#include <iostream>
#include <string>
#include "strcount.h"

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main() {
    string input;

    cout << "Enter a line:\n";
    while (getline(cin, input) && input != "") {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
    }
    cout << "Bye\n";

    return 0;
}
