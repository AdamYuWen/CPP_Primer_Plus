// Programming Exercise 2.3
#include <iostream>

using std::cout;
using std::endl;

void printThree();
void printSee();

int main() {
    printThree();
	printThree();
    printSee();
    printSee();

    return 0;
}

void printThree() {
    cout << "Three blind mice" << endl;
}

void printSee() {
    cout << "See how they run" << endl;
}