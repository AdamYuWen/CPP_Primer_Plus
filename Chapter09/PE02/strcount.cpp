// strcount.cpp -- count the number of characters
#include <iostream>
#include <string>
#include "strcount.h"

using std::cout;
using std::string;

void strcount(const string str) {
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains ";
    for (int i = 0; i < str.size(); ++i) {
        ++count;
    }
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}