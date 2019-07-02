// Programming Exercise 3.2
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
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
    return 0;
}
