// Programming Exercise 10.7
#include <iostream>
#include "plorg.h"

int main() {
    using std::cout;
    using std::endl;

    cout << "Create a plorg by using default constructor:" << endl;
    Plorg org1;
    org1.showPlorg();

    cout << endl << "Create a plorg by using constructor:" << endl;
    Plorg org2("testing");
    org2.showPlorg();
    Plorg org3("testing", 30);
    org3.showPlorg();

    cout << endl << "Reset the CI:" << endl;
    org3.setCI(20);
    org3.showPlorg();

    return 0;
}
