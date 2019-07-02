// Programming Exercise 3.1
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// It is better to capitalize the first letter of the const.
const int ConversionFactor = 12;

int main() {
    int heightInInches;

	cout << "What is your height in integer inches? ________\b\b\b\b\b\b\b\b";
	cin >> heightInInches;
	cout << "You height can also be " << heightInInches / ConversionFactor;
	cout << " feet and " << heightInInches % ConversionFactor << " inches.\n";

    return 0;
}
