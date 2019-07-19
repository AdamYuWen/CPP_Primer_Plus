// Programming Exercise 11.7
#include <iostream>
#include "complex0.h"

int main() {
    using std::cout;

    Mycomplex a(3.0, 4.0);
    Mycomplex c;
    cout << "Enter a complex number (q to quit):\n";
    while (std::cin >> c) {
        cout << "c is " << c << '\n';
        cout << "complex conjugate is " << ~c << '\n';
        cout << "a is " << a << '\n';
        cout << "a + c is " << a + c << '\n';
        cout << "a - c is " << a - c << '\n';
        cout << "a * c is " << a * c << '\n';
        cout << "2 * c is " << 2 * c << '\n';
        cout << "Enter a complex number (q to quit):\n";
    }
    cout << "Done!\n";

    return 0;
}