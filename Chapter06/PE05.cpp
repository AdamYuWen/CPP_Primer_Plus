#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	double input;

	cout << "Enter your income: ";
	while (cin >> input) {
		if (input >= 0) {
			double tax;
			if (input > 35000) {
				tax = 10000 * 0.1 + 20000 * 0.15 + (input - 35000) * 0.2;
			}
			else if (input > 20000) {
				tax = 10000 * 0.1 + (input - 20000) * 0.15;
			}
			else if (input > 10000) {
				tax = (input - 10000) * 0.1;
			}
			else {
				tax = 0.0;
			}

			cout << "Your solicit income is " << input << " tvarps.\n";
			cout << "You would owe " << tax << " tvarps.\n";
			cout << "Enter another income\n";
			cout << "(enter a negative number or non-numeric input ";
			cout << "to terminate): ";
		}
		else {
			break;
		}
	}

	return 0;
}