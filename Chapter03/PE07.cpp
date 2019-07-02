// Programming Exercise 3.7
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const double kmToMiles = 62.14;
const double gallonToLiters = 3.875;


int main() {
    double european, us;

	cout << "How many liters per 100 kilometers? ";
	cin >> european;
	us = 1 / (european / gallonToLiters / kmToMiles);
	cout << "It is equivalent to " << int(us) << " mpg.\n";

    return 0;
}
