// Programming Exercise 12.3
#include <iostream>
#include "stock.h"

const int STKS = 4;

int main() {
    using std::cout;
    using std::endl;

    cout << "Test constructor:" << endl;
    // create an array of initialized objects
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };

    std::cout << "Stock holdings:\n";
    for (int i = 0; i < STKS; ++i) {
        cout << stocks[i];
    }

    cout << "\nTest default constructor:" << endl;
    Stock obj1;
    cout << obj1;

    cout << "\nTest copy constructor:" << endl;
    Stock obj2 = stocks[1];
    cout << obj2;

    cout << "\nTest assignment operator:" << endl;
    obj1 = stocks[0];
    cout << obj1;

    cout << "\nTest Buy function:" << endl;
    obj1.Buy(100, 12.34);
    cout << obj1;

    cout << "\nTest Sell function:" << endl;
    obj1.Sell(62, 34.1);
    cout << obj1;

    cout << "\nTest Update function:" << endl;
    obj1.Update(5.23);
    cout << obj1;

    cout << "\nTest Topval function:" << endl;
    Stock top;
    for (int i = 0; i < STKS - 1; ++i) {
        top = stocks[i].Topval(stocks[i + 1]);
    }
    cout << top;

    return 0;
}
