// Programming Exercise 10.6
#include <iostream>
#include "move.h"

int main() {
    using std::cout;
    using std::endl;

    cout << "Create a object #1:" << endl;
    Move obj1;
    obj1.showmove();

    cout << "Create a object #2:" << endl;
    Move obj2(3, 4);
    obj2.showmove();

    cout << "Added object #2 to object #1:" << endl;
    obj1 = obj1.add(obj2);
    obj1.showmove();

    cout << "Reset object #1:" << endl;
    obj1.reset();
    obj1.showmove();

    return 0;
}
