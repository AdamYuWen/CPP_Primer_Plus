// Programming Exercise 5.7
#include <iostream>
#include <string>

using std::string;

using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main() {
    struct Car {
		string make;
		int yearBuilt;
	};

	cout << "How many cars do you with to catalog? ";
	int numCarCatelog;
	(cin >> numCarCatelog).get();

	Car* pt = new Car[numCarCatelog];
	for (int i = 0; i < numCarCatelog; ++i) {
		cout << "Car #" << i + 1 << endl;
		cout << "Please enter the make: ";
		getline(cin, pt[i].make);
		cout << "Please enter the year made: ";
		(cin >> pt[i].yearBuilt).get();
	}
	cout << "Here is your collection:" << endl;
	int i = 0;
	while (i < numCarCatelog) {
		cout << pt[i].yearBuilt << " " << pt[i].make << endl;
		i++;
	}
	delete[] pt;

    return 0;
}
