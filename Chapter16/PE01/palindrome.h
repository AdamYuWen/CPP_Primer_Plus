// palindrome.h -- get string and check palindrome functions
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

string getString() {
    string str;
    cout << "Enter a string:\n";
    cin >> str;
    return str;
}

bool isPalindrome(string& str) {
    for (int i = 0, j = str.size() - 1; i <= j; ++i, --j) {
        if (str[i] != str[j]) {
            return false;
        }
    }
    return true;
}