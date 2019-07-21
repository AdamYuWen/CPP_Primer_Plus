// Programming Exercise 12.1
#include <iostream>
#include "cow.h"

int main() {
    using std::cout;
    using std::endl;
    {
        cout << "Starting an inner block.\n\n";

        Cow obj1;
        obj1.ShowCow();
        cout << endl;

        Cow obj2("Adam", "Snooker", 180.50);
        obj2.ShowCow();
        cout << endl;

        Cow obj3 = obj2;
        obj3.ShowCow();
        cout << endl;

        obj1 = obj3;
        obj1.ShowCow();

        cout << "\nExiting the block.\n";
    }

    return 0;
}
