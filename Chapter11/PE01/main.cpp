// Programming Exercise 11.1
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ofstream;
    using vector::Vector;

    ofstream fout;
    fout.open("PE01.txt");

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

        fout << "Target Distance: " << target << ", "
             << "Step Size: " << dstep << endl;
        fout << steps << ": " << result << endl;
        while (result.mag() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            ++steps;
            fout << steps << ": " << result << endl;
        }
        fout << "After " << steps << " steps, the subject "
             << "has the following location:\n";
        fout << result << endl;
        result.polar_mode();
        fout << " or\n" << result << endl;

        fout << "Average outward distance per step = "
             << result.mag() / steps << endl;
        fout << "=====================================================\n";

        cout << "After " << steps << " steps, the subject "
             << "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;

        cout << "Average outward distance per step = "
             << result.mag() / steps << endl;
        cout << "=====================================================\n";

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }

    fout.close();
    cout << "Bye!\n";

    cin.clear();
    while (cin.get() != '\n') {
        continue;
    }

    return 0;
}
