// Programming Exercise 9.4
#include <iostream>
#include "sales.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    using namespace SALES;

    const double testArr[] = { 100.1, 200.2, 300.3 };
    Sales obj1, obj2(testArr, 3);

    // use the non-interactive version of setSales()
    cout << "The non-interactive version:" << endl;
    cout << "  Default constructor:" << endl;
    obj1.showSales();
    cout << "  Constructor:" << endl;
    obj2.showSales();
    cout << "===============================" << endl;
    
    // use the interactive version of setSales()
    cout << "The interactove version:" << endl;
    obj1.setSales();
    obj1.showSales();


    return 0;
}
