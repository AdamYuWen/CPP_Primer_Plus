// Programming Exercise 2.7
#include <iostream>

int main() {
    using std::cin;
    using std::cout;
    using std::endl;

    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    cout << "Time: " << hours << ":" << minutes << endl;

    return 0;
}