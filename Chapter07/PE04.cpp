// Programming Exercise 7.4
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

long double probability(unsigned int numbers, unsigned int picks);

int main() {
	cout << "The probability of winning a Mega is "
         << probability(47, 5) * probability(27, 1) << ".\n";

    return 0;
}

long double probability(unsigned int numbers, unsigned int picks) {
    long double result = 1.0;
    long double n;
    unsigned int p;

    for (n = numbers, p = picks; p > 0; n--, p--) {
        result = result * n / p;
    }

    return result;
}