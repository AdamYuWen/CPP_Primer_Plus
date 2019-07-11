// Programming Exercise 9.1
#include <iostream>
#include "golf.h"

using std::cout;
using std::endl;

int main() {
    cout << "TEST: non-interactive version:" << endl;
	golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);
    cout << "===================================" << endl;

    cout << "TEST: interactive version:" << endl;
    golf andy;
    int showOrNot = setgolf(andy);
    if (showOrNot) {
        showgolf(andy);
    }
    cout << "===================================" << endl;

    cout << "TEST: an array of 10 golfs:" << endl;
    cout << "Enter information section:" << endl;
    golf arr[arrSize];
    int i;
    for (i = 0; i < arrSize; ++i) {
        if (setgolf(arr[i])) {
            continue;
        }
        else {
            break;
        }
    }
    cout << "Show entered information section:" << endl;
    for (int j = 0; j < i; ++j) {
        showgolf(arr[j]);
    }
    cout << "===================================" << endl;

    return 0;
}