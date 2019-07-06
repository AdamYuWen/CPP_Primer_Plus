// Programming Exercise 7.8
#include <iostream>
#include <array>
#include <string>

using std::array;
using std::string;

using std::cin;
using std::cout;
using std::endl;

const int Seasons = 4;
const char* Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter"};

struct Expenses {
    double expenses[Seasons];
};

void fillA(double* pa);
void showA(const double* da);

void fillB(Expenses* pa);
void showB(const Expenses da);

int main() {
    cout << "Version a:" << endl;
    double expensesA[4];
    // Pass the array == pass the address of the array
    fillA(expensesA);
    showA(expensesA);
    cout << endl;

    cout << "Version b:" << endl;
    Expenses expensesB;
    fillB(&expensesB);
    showB(expensesB);

    return 0;
}

void fillA(double* pa) {
    for (int i = 0; i < Seasons; ++i) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}

void showA(const double* da) {
    double total = 0.0;
    cout << "\nEXPRESSES\n";
    for (int i = 0; i < Seasons; ++i) {
        cout << Snames[i] << ": $" << da[i]  << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

void fillB(Expenses* pa) {
    for (int i = 0; i < Seasons; ++i) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa->expenses[i];
    }
}

void showB(const Expenses da) {
    double total = 0.0;
    cout << "\nEXPRESSES\n";
    for (int i = 0; i < Seasons; ++i) {
        cout << Snames[i] << ": $" << da.expenses[i]  << endl;
        total += da.expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}