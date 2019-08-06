// wine.cpp -- implementing class Wine
#include "wine.h"

// initialize label to l, number of years to y,
// vintage years to yr[], bottles to bot[]
Wine::Wine(const char* l, int y, const int yr[], const int bot[])
    : name_(l), num_years_ = y,
    years_bottles_(ArrayInt(yr, y), ArrayInt(bot, y)) {}

// initialize label to l, number of year to y,
// create array objects of length y
Wine::Wine(const char* l, int y) : name_(l), num_years(y) {}