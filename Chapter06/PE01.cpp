#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

int main() {
    char ch;
    cout << "Enter from keyboard (using to \"@\" to stop):\n";

    cin.get(ch);
    while (ch != '@') {
        if (!isdigit(ch)) {
            if (islower(ch)) {
                cout << char(toupper(ch));
            }
            else if (isupper(ch)) {
                cout << char(tolower(ch));
            }
            else {
                cout << ch;
            }
        }
        cin.get(ch);
    }
    cout << endl;

    return 0;
}