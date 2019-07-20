// Programming Exercise 11.5
#include <iostream>
#include "stonewt.h"

int main() {
    using std::cout;
    using std::endl;

    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7
    Stonewt taft(21, 8);

    cout << "Test addition and set to STONE mode:\n";
    cout << (incognito + wolfe).set_stone_mode() << endl << endl;

    cout << "Test subtract:\n";
    Stonewt testSubtract = wolfe - incognito;
    cout << testSubtract << endl;
    cout << "Change the mode to INTPOUNDS:\n";
    testSubtract.set_intpounds_mode();
    cout << testSubtract << endl;
    cout << "Change the mode to FLOATPOUNDS:\n";
    testSubtract.set_folatpounds_mode();
    cout << testSubtract << endl << endl;

    cout << "Test multiply:\n";
    cout << taft * 2 << endl;
    cout << 2 * taft << endl;

    return 0;
}