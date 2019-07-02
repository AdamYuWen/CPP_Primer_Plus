// Programming Exercise 5.6
#include <iostream>
#include <string>
#include <array>

using std::string;
using std::array;

using std::cin;
using std::cout;
using std::endl;

int main() {
    string Month[12] = { "January", "February", "March",
						 "April", "May", "June",
						 "July", "August", "September",
						 "October", "November", "December" };
	array<array<int, 12>, 3> sales;
	int sumOfSales[3] = { 0 };

	for (int yr = 0; yr < 3; ++yr) {
		cout << "Enter the sales in year " << yr + 1 << ":\n";
		for (int mm = 0; mm < 12; ++mm) {
			cout << "\tEnter the sales in " << Month[mm] << ": \t";
			cin >> sales[yr][mm];
			sumOfSales[yr] += sales[yr][mm];
		}
	}
	cout << "------------------------------------------" << endl;
	cout << "The total sales for year 1 is " << sumOfSales[0] << ".\n";
	cout << "The total sales for year 2 is " << sumOfSales[1] << ".\n";
	cout << "The total sales for year 3 is " << sumOfSales[2] << ".\n";

	cout << "------------------------------------------" << endl;
	cout << "The total sales for 3 years is "
         << sumOfSales[0] + sumOfSales[1] + sumOfSales[2] << ".\n";

    return 0;
}
