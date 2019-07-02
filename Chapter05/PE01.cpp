// Programming Exercise 5.1
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int small, large, sum = 0;

	cout << "Enter the smaller integer: ";
	cin >> small;
	cout << "Enter the larger integer: ";
	cin >> large;

	for (int i = small; i < large + 1; ++i) {
		sum += i;
	}

	cout << "The sum of all the integers from "
         << small << " through " << large
         << " is " << sum << ".\n";

    return 0;
}
