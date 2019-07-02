// Programming Exercise 5.10
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "Enter number of rows: ";
	int rowNum;
	cin >> rowNum;

	int periods = rowNum - 1, asterisks = 1;
	for (int i = 0; i < rowNum; ++i) {
		for (int period = 0; period < periods; ++period) {
			cout << ".";
		}
		for (int asterisk = 0; asterisk < asterisks; ++asterisk) {
			cout << "*";
		}
		cout << endl;
		--periods;
		++asterisks;
	}

    return 0;
}
