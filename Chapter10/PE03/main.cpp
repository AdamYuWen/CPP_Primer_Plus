// Programming Exercise 10.3
#include <iostream>
#include "golf.h"

int main() {
    using std::cout;
    using std::endl;

    cout << "TEST: non-interactive version (constructor):" << endl;
	Golf ann("Ann Birdfree", 24);
    ann.showgolf();
    ann.sethandicap(36);
    ann.showgolf();
    cout << "===================================" << endl;

    cout << "TEST: interactive version:" << endl;
    Golf andy;
    int showOrNot = andy.setgolf();
    if (showOrNot) {
        andy.showgolf();
    }
    cout << "===================================" << endl;

    cout << "TEST: an array of 10 golfs:" << endl;
    cout << "Enter information section:" << endl;
    Golf arr[arrSize];
    int i;
    for (i = 0; i < arrSize; ++i) {
        if (arr[i].setgolf()) {
            continue;
        }
        else {
            break;
        }
    }
    cout << "Show entered information section:" << endl;
    for (int j = 0; j < i; ++j) {
        arr[j].showgolf();
    }
    cout << "===================================" << endl;

    return 0;
}