// Chapter03.cpp -- Programming exercises for Chapter 03
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Programming Exercise 3.1
void inchesToFeetInches() {
	int heightInInches;
	const int ConversionFactor = 12;	// It is better to capitalize the first letter of the const.

	cout << "What is your height in integer inches? ________\b\b\b\b\b\b\b\b";
	cin >> heightInInches;
	cout << "You height can also be " << heightInInches / ConversionFactor;
	cout << " feet and " << heightInInches % ConversionFactor << " inches.\n";
}

// Programming Exercise 3.2
void calculateBMI() {
	double height, weight;
	int heightInFeet, heightInInches;
	int weightInPounds;

	const int FootToInchesCF = 12;
	const double InchesToMetersCF = 0.0254;
	const double PoundsToKilogramsCF = 2.2;

	cout << "What is your height in feet and inches (separate by a space)? ________\b\b\b\b\b\b\b\b";
	cin >> heightInFeet >> heightInInches;
	cout << "What is your weight in pounds? ________\b\b\b\b\b\b\b\b";
	cin >> weightInPounds;

	height = (heightInFeet * FootToInchesCF + heightInInches) * InchesToMetersCF;
	weight = weightInPounds / PoundsToKilogramsCF;

	cout << "Your BMI is " << weight / height / height << ".\n";
}

// Programming Exercise 3.3
void latitudeDecimal() {
	double degrees, minutes, seconds;
	const double ConversionFactor = 60.0;

	cout << "Enter a latitude in degrees, minutes, and seconds:\n";
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	cout << degrees << " degress, " << minutes << " minutes, " << seconds << " seconds = ";
	cout << degrees + minutes / ConversionFactor + seconds / ConversionFactor / ConversionFactor << " degress\n";
}

// Programming Exercise 3.4
void secondToDaysHoursMinutesSeconds() {
	long long secondsInput;
	int days, hours, minutes, secondsOutput;
	const double HoursMinutesSecondsCF = 60.0;
	const double HoursToDays = 24.0;

	cout << "Enter the number of seconds: ";
	cin >> secondsInput;

	days = int(secondsInput / HoursMinutesSecondsCF / HoursMinutesSecondsCF / HoursToDays);
	hours = int(secondsInput / HoursMinutesSecondsCF / HoursMinutesSecondsCF - days * HoursToDays);
	minutes = int(secondsInput / HoursMinutesSecondsCF - days * HoursMinutesSecondsCF * HoursToDays - hours * HoursMinutesSecondsCF);
	secondsOutput = secondsInput % int(HoursMinutesSecondsCF);
		
	cout << secondsInput << " seconds = " << days << " days, " << hours << " hours, ";
	cout << minutes << " minutes, " << secondsOutput << " seconds\n";
}

// Programming Exercise 3.5
void percentageOfPopulation() {
	long long worldPopulation;
	long long USPopulation;

	cout << "Enter the world's population: ";
	cin >> worldPopulation;
	cout << "Enter the population of the US: ";
	cin >> USPopulation;
	cout << "The population of the US is ";
	cout << USPopulation / long double(worldPopulation) * 100 << "% of the world population.\n";
}

// Programming Exercise 3.6
void milesPerGallon() {
	double miles, gallons;
	cout << "How many miles have you driven? ";
	cin >> miles;
	cout << "How many gallons of gasoline have you used? ";
	cin >> gallons;
	cout << "Your car has gotten " << gallons / miles << " gallons/miles." << endl;
}

// Programming Exercise 3.7
void gasolineConsumptionConvert() {
	double european, us;

	const double kmToMiles = 62.14;
	const double gallonToLiters = 3.875;

	cout << "How many liters per 100 kilometers? ";
	cin >> european;
	us = 1 / (european / gallonToLiters / kmToMiles);
	cout << "It is equivalent to " << int(us) << " mpg.\n";
}

int main() {
	int exerciseNum;
	cout << "Which exercise do you want to test? (1-7) (Enter \"0\" to quit)\n";
	cin >> exerciseNum;

	while (exerciseNum < 0 || exerciseNum > 7) {
		cout << "Please provide a valid number!" << endl;
		cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n" << endl;
		cout << "Which exercise do you want to test? (1-7) (Enter \"0\" to quit)\n";
		cin >> exerciseNum;
	}
	
	while (exerciseNum != 0) {
		switch (exerciseNum) {
		case 1: // Test Programming Exercise 3.1
			inchesToFeetInches();
			break;
		case 2:	// Test Programming Exercise 3.2
			calculateBMI();
			break;
		case 3:	// Test Programming Exercise 3.3
			latitudeDecimal();
			break;
		case 4:	// Test Programming Exercise 3.4
			secondToDaysHoursMinutesSeconds();
			break;
		case 5:	// Test Programming Exercise 3.5
			percentageOfPopulation();
			break;
		case 6:	// Test Programming Exercise 3.6
			milesPerGallon();
			break;
		case 7:	// Test Programming Exercise 3.7
			gasolineConsumptionConvert();
			break;
		default:
			cout << "Please provide a valid number!" << endl;
			break;
		}

		cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n" << endl;
		cout << "What else do you want to test? (1-7)\n";
		cin >> exerciseNum;
	}

	return 0;
}