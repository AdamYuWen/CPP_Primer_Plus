#include <iostream>
#include <cstring> // for strlen(), strcpy()
using namespace std;

struct stringy {
    char* str;  // points to a string
    int ct;     // length of string (not counting '\0')
};

// prototypes for set(), show(), and show() go here
void set(stringy& beany, char charArr[]);
void show(const stringy& beany, int times = 1);
void show(const char* ptrStr, int times = 1);

int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    // first argument is a reference,
    // allocates space to hold copy of testing,
    // sets str member of beany to point to the
    // new block, copies testing to new block,
    // and sets ct member of beany
    show(beany);      // prints member string once
    show(beany, 2);   // prints member string twice

    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);    // prints testing string once
    show(testing, 3); // prints testing string thrice

    show("Done!");

    delete[] beany.str;

    return 0;
}

void set(stringy& beany, char charArr[]) {
    beany.ct = strlen(charArr);
    beany.str = new char[beany.ct + 1];
    strcpy(beany.str, charArr);
}

void show(const stringy& beany, int times) {
    for (int i = 0; i < times; ++i) {
        cout << "The str is \"" << beany.str << "\".\n";
        cout << "And, the ct is " << beany.ct << ".\n";
    }
    cout << "===============================================" << endl;
}

void show(const char* ptrStr, int times) {
    for (int i = 0; i < times; ++i) {
        for (int j = 0; ptrStr[j] != '\0'; ++j) {
            cout << ptrStr[j];
        }
        cout << endl;
    }
    cout << "===============================================" << endl;
}