// Programming Exercise 5.5
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
	array<int, 12> sales;
	int sumOfSales = 0;

	for (int i = 0; i < 12; ++i) {
		cout << "Enter the sales in " << Month[i] << ": \t";
		cin >> sales[i];
		sumOfSales += sales[i];
	}
	cout << "------------------------------------" << endl;
	cout << "The total sales for the year is " << sumOfSales << ".\n";

    return 0;
}
