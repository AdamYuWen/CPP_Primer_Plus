// Programming Exercise 11.1
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    using vector::Vector;

    srand(time(0));
    double direction, target, dstep;
    Vector step, result(0.0, 0.0);
    unsigned long steps = 0;

    cout << "Enter target distance (q to quit): ";
    while (cin >> target) {
        cout << "Enter step length: ";
        if (!(cin >> dstep)) {
            break;
        }

        while (result.set_mag() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            ++steps;
        }

        cout << "After " << steps << " steps, the subject "
             << "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;

        cout << "Average outward distance per step = "
             << result.set_mag() / steps << endl;
        cout << "=====================================================\n";

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }

    cout << "Bye!\n";

    cin.clear();
    while (cin.get() != '\n') {
        continue;
    }

    return 0;
}
