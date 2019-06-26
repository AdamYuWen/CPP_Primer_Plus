// Chapter05.cpp -- Programming exercises for Chapter 05
#include <iostream>
#include <array>
#include <string>
#include <cstring>
#include <cmath>

using std::array;
using std::string;

using std::cin;
using std::cout;
using std::endl;
using std::getline;

// Programming Exercises 5.1
void sumOfBetween() {
	int small, large, sum = 0;

	cout << "Enter the smaller integer: ";
	cin >> small;
	cout << "Enter the larger integer: ";
	cin >> large;

	for (int i = small; i < large + 1; ++i) {
		sum += i;
	}

	cout << "The sum of all the integers from "
		<< small << " through " << large
		<< " is " << sum << ".\n";
}

// Programming Exercises 5.2
void oneHundredFactorial() {
	array<long double, 101> factorials;

	factorials[0] = factorials[1] = 1.0;
	for (int i = 2; i < 101; ++i) {
		factorials[i] = factorials[i - 1] * i;
		// cout << i << "! = " << factorials[i] << endl;
	}

	cout << "The valus of 100! is " << factorials[100] << ".\n";
}

// Programming Exercises 5.3
void sumToDate() {
	int newNum, sum = 0;

	cout << "Enter a new number: ";
	while (cin >> newNum && newNum != 0) {
		sum += newNum;
		cout << "The cumulative sum is " << sum << ".\n";
		cout << "Enter a new number: ";
	}
	cout << "The final cumulative sum is " << sum << ".\n";
}

// Programming Exercises 5.4
void simpleVsCompound() {
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
}

// Programming Exercise 5.5
void monthlySales() {
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
}

// Programming Exercise 5.6
void monthlyYearSales() {
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
}

// Programming Exercise 5.7
void automobile() {
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
}

// Programming Exercise 5.8
void readWordArray() {
	const int ArraySize = 20;
	char input[ArraySize];
	int cnt = 0;

	cout << "Enter words (to stop, type the word done)\n";
	cout << "(each input cannot be longer than 20 characters):" << endl;
	while (cin.getline(input, ArraySize) && strcmp(input, "done")) {
		cnt++;
	}
	cout << "You entered a total of " << cnt << " words.\n";
}

// Programming Exercise 5.9
void readWordString() {
	string input;
	int cnt = 0;

	// The method is different from 5.8.
	// For 5.8, read all words, then analysis. So, the output
	// will be the same as the example in the book.
	// For 5.9, read word one by one, meet "done", then stop.
	cout << "Enter words (to stop, type the word done):" << endl;
	while (cin >> input && input != "done") {
		cnt++;
	}
	cout << "You entered a total of " << cnt << " words.\n";
}

// Programming Exercise 5.10
void displayAsterisks() {
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
		periods--;
		asterisks++;
	}
}

int main() {
	int exerciseNum;
	cout << "Which exercise do you want to test? (1-10) (Enter \"0\" to quit)\n";
	(cin >> exerciseNum).get();

	while (exerciseNum < 0) {
		cout << "Please provide a valid number!" << endl;
		cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n" << endl;
		cout << "Which exercise do you want to test? (1-10) (Enter \"0\" to quit)\n";
		(cin >> exerciseNum).get();
	}

	while (exerciseNum != 0) {
		switch (exerciseNum) {
		case 1: // Test Programming Exercise 5.1
			sumOfBetween();
			break;
		case 2:	// Test Programming Exercise 5.2
			oneHundredFactorial();
			break;
		case 3:	// Test Programming Exercise 5.3
			sumToDate();
			break;
		case 4:	// Test Programming Exercise 5.4
			simpleVsCompound();
			break;
		case 5:	// Test Programming Exercise 5.5
			monthlySales();
			break;
		case 6:	// Test Programming Exercise 5.6
			monthlyYearSales();
			break;
		case 7:	// Test Programming Exercise 5.7
			automobile();
			break;
		case 8:	// Test Programming Exercise 5.8
			readWordArray();
			break;
		case 9:	// Test Programming Exercise 5.9
			readWordString();
			break;
		case 10:	// Test Programming Exercise 5.10
			displayAsterisks();
			break;
		default:
			cout << "Please provide a valid number!" << endl;
			break;
		}

		cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n" << endl;
		cout << "What else do you want to test? (1-10)\n";
		(cin >> exerciseNum).get();
	}

	return 0;
}