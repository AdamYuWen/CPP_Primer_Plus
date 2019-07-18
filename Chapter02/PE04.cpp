// Programming Exercise 2.4
#include <iostream>

int main() {
    using std::cin;
    using std::cout;
    using std::endl;

    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age in months is " << age * 12 << endl;

    return 0;
}