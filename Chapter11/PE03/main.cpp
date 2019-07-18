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
    int N;
    double direction, target = 50.0, dstep = 2.0;
    Vector step, result(0.0, 0.0);
    unsigned long steps = 0, highest, lowest, sum;

    cout << "Enter the number of trails: ";
    cin >> N;

    for (int i = 0; i < N; ++i) {
        while (result.mag() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            ++steps;
        }

        cout << "After " << steps << " steps, the subject "
             << "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << "========================================================\n";

        if (i == 0) {
            highest = steps;
            lowest = steps;
        } else {
            highest = highest > steps ? highest : steps;
            lowest = lowest < steps ? lowest : steps;
        }
        sum += steps;

        steps = 0;
        result.reset(0.0, 0.0);
    }
    cout << "The highest number of step for N trails is " << highest << ".\n";
    cout << "The lowest  number of step for N trails is " << lowest << ".\n";
    cout << "The average number of step for N trails is "
         << sum / (double)N << ".\n";

    cout << "Bye!\n";

    cin.clear();
    while (cin.get() != '\n') {
        continue;
    }

    return 0;
}
