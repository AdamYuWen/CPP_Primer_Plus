// palindrome.h -- get string and check palindrome functions
#include <iostream>
#include <string>
#include <cctype>

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
    int i = 0, j = str.size() - 1;
    while(i <= j) {
        if (!isalpha(str[i])) {
            ++i;
            continue;
        }
        if (!isalpha(str[j])) {
            --j;
            continue;
        }
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        if (isupper(str[j])) {
            str[j] = tolower(str[j]);
        }
        if (str[i] != str[j]) {
            return false;
        }
        ++i;
        --j;
    }
    return true;
}