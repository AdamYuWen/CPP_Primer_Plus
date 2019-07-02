#include <iostream>
#include <array>
#include <string>
#include <cctype>

using std::array;
using std::string;

using std::cin;
using std::cout;
using std::endl;

const int numDonation = 10;

int main() {
    array<double, numDonation> donation;
    double input, sum = 0.0, average;
    int idx = 0, cnt = 0;

    while (cin >> input && idx < numDonation) {
        donation[idx] = input;
        sum += input;
        ++idx;
    }
    // The number idx is one more than the number of inputs.
    average = sum / double(idx);
    for (int i = 0; i < idx; ++i) {
        if (donation[i] > average) {
            ++cnt;
        }
    }

    cout << "The average of the numbers is " << average << ".\n";
    cout << cnt << " numbers in the array are larger than the average.\n";

    return 0;
}