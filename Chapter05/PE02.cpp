// Programming Exercise 5.2
#include <iostream>
#include <array>

using std::array;

using std::cin;
using std::cout;
using std::endl;

int main() {
    array<long double, 101> factorials;

	factorials[0] = factorials[1] = 1.0;
	for (int i = 2; i < 101; ++i) {
		factorials[i] = factorials[i - 1] * i;
	}

	cout << "The valus of 100! is " << factorials[100] << ".\n";

    return 0;
}
