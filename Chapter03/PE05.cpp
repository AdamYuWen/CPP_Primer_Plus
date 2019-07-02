// Programming Exercise 3.5
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    long long worldPopulation;
	long long USPopulation;

	cout << "Enter the world's population: ";
	cin >> worldPopulation;
	cout << "Enter the population of the US: ";
	cin >> USPopulation;
	cout << "The population of the US is ";
	cout << USPopulation / (long double)(worldPopulation) * 100
         << "% of the world population.\n";

    return 0;
}
