// Programming Exercise 5.3
#include <iostream>

using std::cin;
using std::cout;

int main() {
    int newNum, sum = 0;

	cout << "Enter a new number: ";
	while (cin >> newNum && newNum != 0) {
		sum += newNum;
		cout << "The cumulative sum is " << sum << ".\n";
		cout << "Enter a new number: ";
	}
	cout << "The final cumulative sum is " << sum << ".\n";

    return 0;
}
