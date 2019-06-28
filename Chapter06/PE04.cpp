#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int strsize = 20;
struct bop {
	char fullname[strsize];	// real name
	char title[strsize];	// job title
	char bopname[strsize];	// scret BOP name
	int preference;			// 0 = fullname, 1 = title, 2 = bopname
};

int main() {
	const int programmersSize = 5;
	bop programmers[programmersSize] = { { "Wimp Macho", "Wimp Macho", "WM", 0 },
	                                     { "Raki Rhodes", "Junior Programmer", "RR", 1 },
	                                     { "Celia Laiter", "Junior Programmer", "MIPS", 2 },
	                                     { "Hoppy Hipman", "Analyst Trainee", "HH", 1 },
	                                     { "Pat Hand", "Analyst Trainee", "LOOPY", 2 } };
	bop* ptrBOP = programmers;
	
	cout << "Benevolent Order of Programmers Report" << endl;
	cout << "a. display by name          b. display by title" << endl;
	cout << "c. display by bopname       d. display by preference" << endl;
	cout << "q. quit" << endl;
	cout << "Enter your choice: ";

	char ch;
	while (cin.get(ch)) {
		if (!(ch == 'a' || ch == 'b' || ch == 'c' || ch == 'd' || ch == 'q')) {
			cout << "Please enter a valid input!" << endl;
			cin.clear();
			while (cin.get() != '\n')
				continue;
		}
		else if (ch == 'q') {
			cout << "Bye!" << endl;
			break;
		}
		else {
			switch (ch) {
			case 'a':
				for (int i = 0; i < programmersSize; ++i) {
					cout << ptrBOP[i].fullname << endl;
				}
				break;
			case 'b':
				for (int i = 0; i < programmersSize; ++i) {
					cout << ptrBOP[i].title << endl;
				}
				break;
			case 'c':
				for (int i = 0; i < programmersSize; ++i) {
					cout << ptrBOP[i].bopname << endl;
				}
				break;
			case 'd':
				for (int i = 0; i < programmersSize; ++i) {
					if (ptrBOP[i].preference == 0) {
						cout << ptrBOP[i].fullname << endl;
					}
					else if (ptrBOP[i].preference == 1) {
						cout << ptrBOP[i].title << endl;
					}
					else {
						cout << ptrBOP[i].bopname << endl;
					}
				}
				break;
			default:
				break;
			}
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Next choice: ";
		}
	}

	return 0;
}