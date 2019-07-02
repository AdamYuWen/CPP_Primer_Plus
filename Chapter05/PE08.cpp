// Programming Exercise 5.8
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int ArraySize = 20;

int main() {
	char input[ArraySize];
	int cnt = 0;

	cout << "Enter words (to stop, type the word done)\n";
	cout << "(each input cannot be longer than 20 characters):" << endl;
	while (cin >> input && strcmp(input, "done")) {
		++cnt;
	}

	// Because the program can read more words after "done", there will
	// be more words in cin. The following while loop clear all words
	// after "done", so that it won't affect the while loop in main
	// function.
	while (cin.get() != '\n') {
		continue;
	}
	cout << "You entered a total of " << cnt << " words.\n";

    return 0;
}
