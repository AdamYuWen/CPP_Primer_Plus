// Programming Exercise 3.3
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const double ConversionFactor = 60.0;

int main() {
    double degrees, minutes, seconds;

	cout << "Enter a latitude in degrees, minutes, and seconds:\n";
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	cout << degrees << " degress, " << minutes << " minutes, " << seconds << " seconds = ";
	cout << degrees + minutes / ConversionFactor +
        seconds / ConversionFactor / ConversionFactor << " degress\n";

    return 0;
}
