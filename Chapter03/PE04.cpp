// Programming Exercise 3.4
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const double HoursMinutesSecondsCF = 60.0;
const double HoursToDays = 24.0;

int main() {
    long long secondsInput;
	int days, hours, minutes, secondsOutput;

	cout << "Enter the number of seconds: ";
	cin >> secondsInput;

	days = int(secondsInput / HoursMinutesSecondsCF /
               HoursMinutesSecondsCF / HoursToDays);
	hours = int(secondsInput / HoursMinutesSecondsCF / HoursMinutesSecondsCF -
                days * HoursToDays);
	minutes = int(secondsInput / HoursMinutesSecondsCF -
                  days * HoursMinutesSecondsCF * HoursToDays -
                  hours * HoursMinutesSecondsCF);
	secondsOutput = secondsInput % int(HoursMinutesSecondsCF);

    cout << secondsInput << " seconds = " << days << " days, "
         << hours << " hours, " << minutes << " minutes, "
         << secondsOutput << " seconds\n";

    return 0;
}
