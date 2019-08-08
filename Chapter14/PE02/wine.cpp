// wine.cpp -- implementing class Wine
#include "wine.h"

// initialize label to l, number of years to y,
// vintage years to yr[], bottles to bot[]
Wine::Wine(const char* l, int y, const int yr[], const int bot[])
    : std::string(l), num_years_(y),
      PairArray(ArrayInt(yr, y), ArrayInt(bot, y)) {}

// initialize label to l, number of year to y,
// create array objects of length y
Wine::Wine(const char* l, int y)
    : std::string(l), num_years_(y),
      PairArray(ArrayInt(y), ArrayInt(y)){}

void Wine::GetBottles() {
    using std::cin;
    using std::cout;
    cout << "Enter " << (const std::string&) *this
         << " data for " << num_years_ << " year(s):\n";
    for (int i = 0; i < num_years_; ++i) {
        cout << "Enter year: ";
        cin >> PairArray::first()[i];
        cout << "Enter bottles for that year: ";
        cin >> PairArray::second()[i];
    }
}

std::string Wine::Label() const {
    return (const std::string&) *this;
}

int Wine::sum() const {
    return PairArray::second().sum();
}

void Wine::Show() const {
    using std::cout;
    using std::endl;
    cout << "Wine: " << (const std::string&) *this << endl;
    cout << "\tYear\tBottles\n";
    for (int i = 0; i < num_years_; ++i) {
        cout << "\t" << PairArray::first()[i];
        cout << "\t" << PairArray::second()[i];
        cout << endl;
    }
}