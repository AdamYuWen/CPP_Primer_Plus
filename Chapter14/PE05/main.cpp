// Programming Exercise 14.5
// useemp1.cpp -- using the abstr_emp classes
#include <iostream>
#include "emp.h"
using namespace std;

int main() {
    employee em("Trip", "Harris", "Thumper");
    cout << em << endl;
    em.ShowAll();

    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma << endl;
    ma.ShowAll();

    fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
    cout << fi << endl;
    fi.ShowAll();

    highfink hf(ma, "Curly Kew"); // recruitment?
    hf.ShowAll();

    cout << "Press a key for next phase:\n";
    cin.get();

    highfink hf2;
    hf2.SetAll();

    cout << "Using an abstr_emp* pointer:\n";
    abstr_emp* tri[4] = { &em, &fi, &hf, &hf2 };
    for (int i = 0; i < 4; i++) {
        tri[i]->ShowAll();
    }

/*
    1. Why is no assignment operator defined?
       The default assignment operators work well.

    2. Why are ShowAll() and SetAll virtual?
       Would like to have different outputs for different classes.

    3. Why is abstr_emp a virtual base class?
       virtual ~abstr_emp() = 0; It is a pure absact base class.

    4. Why does the highfink class have no data section?
       It doesn't need addtional information. It inherits data from bases
       classes.

    5. Why is only one version of operator<<() needed?
       All derived classes inherit the operator<<() from the base class.

    6. What would heppen if the end of the program were replaced with this code?
       abstr_emp tri[4] = { em, fi, hf, hf2 };
       for (int i = 0; i < 4, i++)
           tri[i].ShowAll();
       abstr_emp is a pure abstract base class, so no objects can be created for
       this class.
*/

    return 0;
}