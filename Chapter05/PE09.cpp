// Programming Exercise 5.9
#include <iostream>
#include <string>

using std::string;

using std::cin;
using std::cout;
using std::endl;

int main() {
    string input;
	int cnt = 0;

	cout << "Enter words (to stop, type the word done):" << endl;
	while (cin >> input && input != "done") {
		++cnt;
	}

	while (cin.get() != '\n') {
		continue;
	}
	cout << "You entered a total of " << cnt << " words.\n";

    return 0;
}
