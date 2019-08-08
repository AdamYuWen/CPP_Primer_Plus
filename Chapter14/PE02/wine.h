// wine.h -- class Wine interface
#ifndef WINE_H_
#define WINE_H_

#include <iostream>
#include <utility>
#include <string>
#include <valarray>
#include "pairs.h"

class Wine : private std::string,
             private Pair< std::valarray<int>, std::valarray<int> > {
public:
    Wine(const char* l, int y, const int yr[], const int bot[]);
    Wine(const char* l, int y);

    void GetBottles();
    std::string Label() const;
    int sum() const;
    void Show() const;
private:
    typedef std::valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    int num_years_;
};

#endif // WINE_H_