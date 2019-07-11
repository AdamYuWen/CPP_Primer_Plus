// golf.cpp -- function definitions to match the prototypes in the header file
// golf.h
#include <iostream>
#include <cstring>
#include "golf.h"

using std::cin;
using std::cout;
using std::endl;

void setgolf(golf& g, const char* name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf& g) {
    cout << "Enter the name: ";
    cin.getline(g.fullname, Len);
    if (g.fullname[0] != '\0') {
        cout << "Enter the hanicap: ";
        cin >> g.handicap;
        cin.get();
        return 1;
    }
    else {
        return 0;
    }
}

void hanicap(golf& g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf& g) {
    cout << "The name is " << g.fullname << ".\n";
    cout << "The handicap is " << g.handicap << ".\n";
}