// Programming Exercise 3.1
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int heightInInches;
	const int ConversionFactor = 12;	// It is better to capitalize the first letter of the const.

	cout << "What is your height in integer inches? ________\b\b\b\b\b\b\b\b";
	cin >> heightInInches;
	cout << "You height can also be " << heightInInches / ConversionFactor;
	cout << " feet and " << heightInInches % ConversionFactor << " inches.\n";

    return 0;
}
