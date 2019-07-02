// Programming Exercise 4.10
#include <iostream>
#include <array>

using std::array;

using std::cin;
using std::cout;
using std::endl;

int main() {
    array<double, 3> dash;
	double average;

	cout << "Enter the 1st time for the 40-yd dash: ";
	cin >> dash[0];
	cout << "Enter the 2nd time for the 40-yd dash: ";
	cin >> dash[1];
	cout << "Enter the 3rd time for the 40-yd dash: ";
	cin >> dash[2];

	average = (dash[0] + dash[1] + dash[2]) / 3.0;
	cout << "\nThe 1st time is " << dash[0] << "s.";
	cout << "\nThe 2nd time is " << dash[1] << "s.";
	cout << "\nThe 3rd time is " << dash[2] << "s.";
	cout << "\nThe average time is " << average << "s.\n";

    return 0;
}