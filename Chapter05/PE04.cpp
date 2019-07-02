// Programming Exercise 5.4
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int main() {
    cout.setf(std::ios_base::fixed, std::ios_base::floatfield);

	int yrNum = 0;
	double daphne = 0.0, cleo = 0.0;

	while (cleo <= daphne) {
		daphne = 100 + yrNum * 10;
		cleo = 100 * pow((1 + 0.05), yrNum);
		yrNum++;
	}
	cout << "In year " << yrNum - 1 << ":\n";
	cout << "Cleo's investment is $" << cleo << ".\n";
	cout << "Dephne's investment is $" << daphne << ".\n";

    return 0;
}
