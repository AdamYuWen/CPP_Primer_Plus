// Programming Exercise 11.5
#include <iostream>
#include <iomanip>
#include "stonewt.h"

int main() {
    using std::cout;
    using std::endl;
    cout << std::boolalpha;

    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7

    // The priority of << is higher than the priority of comparison operator.
    // And, they are also higher than the priority of equality / inequality.
    // So, () need to be added here.
    cout << "Test == / !=:" << endl;
    cout << "incognito is ";
    incognito.show_lbs();
    cout << "wolfe is ";
    wolfe.show_lbs();
    cout << "Are they equal? " << (incognito == wolfe) << endl;
    cout << "Are they NOT equal? " << (incognito != wolfe) << endl;
    incognito = wolfe;
    cout << "After incognito = wolfe:" << endl;
    cout << "Are they equal? " << (incognito == wolfe) << endl;
    cout << "Are they NOT equal? " << (incognito != wolfe) << endl << endl;

    wolfe = 285;
    cout << "incognito is ";
    incognito.show_lbs();
    cout << "wolfe is ";
    wolfe.show_lbs();
    cout << "incognito < wolfe?  " << (incognito < wolfe) << endl;
    cout << "incognito <= wolfe? " << (incognito <= wolfe) << endl;
    cout << "incognito > wolfe?  " << (incognito > wolfe) << endl;
    cout << "incognito >= wolfe? " << (incognito >= wolfe) << endl << endl;

    wolfe = 285.7;
    cout << "incognito is ";
    incognito.show_lbs();
    cout << "wolfe is ";
    wolfe.show_lbs();
    cout << "incognito < wolfe?  " << (incognito < wolfe) << endl;
    cout << "incognito <= wolfe? " << (incognito <= wolfe) << endl;
    cout << "incognito > wolfe?  " << (incognito > wolfe) << endl;
    cout << "incognito >= wolfe? " << (incognito >= wolfe) << endl << endl;

    wolfe = 286;
    cout << "incognito is ";
    incognito.show_lbs();
    cout << "wolfe is ";
    wolfe.show_lbs();
    cout << "incognito < wolfe?  " << (incognito < wolfe) << endl;
    cout << "incognito <= wolfe? " << (incognito <= wolfe) << endl;
    cout << "incognito > wolfe?  " << (incognito > wolfe) << endl;
    cout << "incognito >= wolfe? " << (incognito >= wolfe) << endl << endl;

    return 0;
}