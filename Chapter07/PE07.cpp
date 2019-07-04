// Programming Exercise 7.7
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int Max = 5;

double* fill_array(double* begin, double* end);
void show_array(const double* begin, const double* end);
void revalue(double r, double* begin, double* end);

int main() {
    double properties[Max];

    double* endProperties = fill_array(properties, properties + Max);
    show_array(properties,  endProperties);
    if (endProperties != properties) {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, endProperties);
        show_array(properties, endProperties);
    }
    cout << "Done.\n";
    cin.get();

    return 0;
}

double* fill_array(double* begin, double* end) {
    double temp;
    double* tempPtr;
    int cnt = 1;
    for (tempPtr = begin; tempPtr != end; ++tempPtr) {
        cout << "Enter value #" << cnt << ": ";
        cin >> temp;
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Badinput;" << endl;
            break;
        }
        else if (temp < 0) {
            break;
        }
        *tempPtr = temp;
        ++cnt;
    }
    return tempPtr;
}

void show_array(const double* begin, const double* end) {
    int cnt = 1;
    for (const double* tempPtr = begin; tempPtr != end; ++tempPtr) {
        cout << "Property #" << cnt  << ": $";
        cout << *tempPtr << endl;
        ++cnt;
    }
}

void revalue(double r, double* begin, double* end) {
    for (double* tempPtr = begin; tempPtr != end; ++tempPtr) {
        *tempPtr *= r;
    }
}

