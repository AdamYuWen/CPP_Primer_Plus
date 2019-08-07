// wine.cpp -- implementing class Wine
#include "wine.h"

// initialize label to l, number of years to y,
// vintage years to yr[], bottles to bot[]
Wine::Wine(const char* l, int y, const int yr[], const int bot[])
    : label_(l), num_years_(y),
      years_bottles_(ArrayInt(yr, y), ArrayInt(bot, y)) {}

// initialize label to l, number of year to y,
// create array objects of length y
Wine::Wine(const char* l, int y)
    : label_(l), num_years_(y),
      years_bottles_(ArrayInt(y), ArrayInt(y)){}

void Wine::GetBottles() {
    using std::cin;
    using std::cout;
    cout << "Enter " << label_ << " data for " << num_years_ << " year(s):\n";
    for (int i = 0; i < num_years_; ++i) {
        cout << "Enter year: ";
        cin >> years_bottles_.first()[i];
        cout << "Enter bottles for that year: ";
        cin >> years_bottles_.second()[i];
    }
}

std::string Wine::Label() const {
    return label_;
}

int Wine::sum() const {
    return years_bottles_.second().sum();
}

void Wine::Show() const {
    using std::cout;
    using std::endl;
    cout << "Wine: " << label_ << endl;
    cout << "\tYear\tBottles\n";
    for (int i = 0; i < num_years_; ++i) {
        cout << "\t" << years_bottles_.first()[i];
        cout << "\t" << years_bottles_.second()[i];
        cout << endl;
    }
}