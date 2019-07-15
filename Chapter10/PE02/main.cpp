// Programming Exercise 10.2
#include <iostream>
#include "person.h"

int main() {
    using std::cout;
    using std::endl;

    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");

    cout << "Person one:" << endl;
    one.Show();
    one.FormalShow();
    cout << endl;

    cout << "Person two:" << endl;
    two.Show();
    two.FormalShow();
    cout << endl;

    cout << "Person three:" << endl;
    three.Show();
    three.FormalShow();

    return 0;
}
