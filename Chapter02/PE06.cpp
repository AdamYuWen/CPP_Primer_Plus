// Programming Exercise 2.6
#include <iostream>

int main() {
    using std::cin;
    using std::cout;

    double numLightYear;
    cout << "Enter the number of light years: ";
    cin >> numLightYear;
    cout << numLightYear << "light years = "
         << numLightYear * 63240 << " astronomical units.\n";

    return 0;
}