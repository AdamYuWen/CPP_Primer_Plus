// Programming Exercise 7.10
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int Operations = 4;

double calculate(const double x, const double y,
                 double (*ptr)(const double, const double));
double add(const double x, const double y);
double subtract(const double x, const double y);
double multiply(const double x, const double y);
double divide(const double x, const double y);

int main() {
    double xInput, yInput;
    cout << "Enter a pair of x and y: ";
    while (cin >> xInput >> yInput) {
        // add      <- ptrFcn[0]
        // subtract <- ptrFcn[1]
        // multiply <- ptrFcn[2]
        // divide   <- ptrFcn[3]
        double (*ptrFcn[Operations])(const double, const double) = {
            add, subtract, multiply, divide
        };

        for (int i = 0; i < Operations; ++i) {
            if (i == 0) {
                cout << "calculate(x, y, add): ";
            }
            else if (i == 1) {
                cout << "calculate(x, y, subtract): ";
            }
            else if (i == 2) {
                cout << "calculate(x, y, multiply): ";
            }
            else { // i == 3
                cout << "calculate(x, y, divide): ";
            }
            cout << calculate(xInput, yInput, ptrFcn[i]) << endl;
        }
        cout << "=====================================" << endl;
        cout << "Enter another pair of x and y: ";
    }

    return 0;
}

double calculate(const double x, const double y,
                 double (*ptr)(const double, const double)) {
    return ptr(x, y);
}

double add(const double x, const double y) {
    return x + y;
}

double subtract(const double x, const double y) {
    return x - y;
}

double multiply(const double x, const double y) {
    return x * y;
}

double divide(const double x, const double y) {
    return x / y;
}