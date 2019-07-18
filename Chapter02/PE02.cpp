// Programming Exercise 2.2
#include <iostream>

int main() {
    using std::cin;
    using std::cout;

    double furlongs;
    cout << "Enter a distance in furlongs: ";
    cin >> furlongs;
    cout << "It's equivalent to " << furlongs * 220 << " yards.\n";

    return 0;
}