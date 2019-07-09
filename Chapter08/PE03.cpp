// Programming Exercise 8.3
#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

string myToupper(string& str);

int main() {
	string input;
    cout << "Enter a string (q to quit): ";
    while (getline(cin, input) && input != "q") {
        cout << myToupper(input) << endl;
        cout << "Enter a string (q to quit): ";
    }
    cout << "Bye." << endl;

    return 0;
}

string myToupper(string& str) {
    for (int i = 0; i < str.size(); ++i) {
        str[i] = toupper(str[i]);
    }
    return str;
}