// Programming Exercise 7.1
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double harmonicMean(double x, double y);

int main() {
    double x, y;
	cout << "Enter a pair of numbers: (to stop enter a pair of 0) " << endl;
    while (cin >> x >> y && !(x == 0 && y == 0)) {
        cout << "The harmonic mean is " << harmonicMean(x, y) << ".\n";
        cout << "Enter another pair of numbers: " << endl;
    }

    return 0;
}

double harmonicMean(double x, double y) {
    return 2.0 * x * y / (x + y);
}