// golf.cpp -- implementing the Golf class
#include <iostream>
#include <cstring>
#include "golf.h"

Golf::Golf() {
    strcpy(fullname, "no name");
    handicap = 0;
}

Golf::Golf(const char* name, int hc) {
    strcpy(fullname, name);
    handicap = hc;
}

Golf::~Golf() {}

int Golf::setgolf() {
    using std::cin;
    using std::cout;

    Golf g;

    cout << "Enter the name: ";
    cin.getline(g.fullname, Len);
    if (g.fullname[0] != '\0') {
        cout << "Enter the hanicap: ";
        cin >> g.handicap;
        cin.get();
        *this = g;
        return 1;
    }
    else {
        return 0;
    }
}

void Golf::sethandicap(const int& hc) {
    handicap = hc;
}

void Golf::showgolf() const {
    std::cout << "The name is " << fullname << ".\n";
    std::cout << "The handicap is " << handicap << ".\n";
}