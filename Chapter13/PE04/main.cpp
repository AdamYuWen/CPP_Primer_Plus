// Programming Exercise 13.4
#include <iostream>
#include "port.h"
#include "vintageport.h"

int main() {
    // b. Certain methods are redefined because
    // we want to define differently.
    // Certain methods are not redefined because
    // they are inherited from class Port.

    // c. A derived class doesn't inherit the
    // base-class constructors, destructors,
    // and assignment operators.
    // Friends are not inherited eigher.

    using std::cout;
    using std::endl;

    Port obj1 = Port("Gallo", "tawny", 20);
    Port obj2 = obj1;
    Port obj3;
    obj3 = obj1;

    obj2 += 10;
    obj3 -= 10;

    cout << obj1 << endl;
    cout << obj2 << endl;
    obj3.Show();
    cout << endl;

    VintagePort obj4 = VintagePort("45 Cockburn", 40, "Old Velvet", 1888);
    VintagePort obj5 = obj4;
    VintagePort obj6;
    obj6 = obj4;
    obj5 += 10;
    obj6 -= 10;

    cout << obj4 << endl;
    cout << obj5 << endl;
    obj6.Show();
    cout << endl;

    return 0;
}