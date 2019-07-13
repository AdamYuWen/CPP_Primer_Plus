// Programming Exercise 9.4
#include <iostream>
#include "sales.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    using namespace SALES;

    Sales obj1, obj2;
    const double setZeros[] = { 0.0, 0.0, 0.0, 0.0 };
    const double testArr[] = { 100.1, 200.2, 300.3 };

    // use the interactive version of setSales()
    cout << "The interactove version:" << endl;
    setSales(obj1);
    showSales(obj1);
    cout << "===============================" << endl;

    // use the non-interactive version of setSales()
    cout << "The non-interactive version:" << endl;
    setSales(obj2, setZeros, 4);
    setSales(obj2, testArr, 3);
    showSales(obj2);

    return 0;
}
