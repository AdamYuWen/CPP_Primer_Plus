// wine.h -- class Wine interface
#ifndef WINE_H_
#define WINE_H_

#include <iostream>
#include <utility>
#include <string>
#include <valarray>
#include "pairs.h"

class Wine {
public:
    Wine(const char* l, int y, const int yr[], const int bot[]);
    Wine(const char* l, int y);

    /* void GotBottles() const; */
    /* void Label() const; */
    /* int sum(); */
private:
    typedef std::valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    std::string name_;
    int num_years_;
    PairArray years_bottles_;

};

#endif // WINE_H_