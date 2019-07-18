// Programming Exercise 2.5
#include <iostream>

double celsiumToFahrenheit(double celsius);

int main() {
    using std::cin;
    using std::cout;
    using std::endl;

    double celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is "
         << celsiumToFahrenheit(celsius)
         << " degrees Fahrenheit.\n";

    return 0;
}

double celsiumToFahrenheit(double celsius) {
    return 1.8 * celsius + 32.0;
}