// Programming Exercise 16.1
#include "palindrome.h"

int main() {
    string str = getString();
    if (isPalindrome(str)) {
        cout << "It is a palindrome.\n";
    } else {
        cout << "It is NOT a palindrome.\n";
    }

    return 0;
}
