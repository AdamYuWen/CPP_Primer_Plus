// Programming Exercise 3.6
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    double miles, gallons;
	cout << "How many miles have you driven? ";
	cin >> miles;
	cout << "How many gallons of gasoline have you used? ";
	cin >> gallons;
	cout << "Your car has gotten " << gallons / miles
         << " gallons/miles." << endl;

    return 0;
}
