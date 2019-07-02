// Programming Exercise 6.8
#include <iostream>
#include <fstream>
#include <cstdlib>

using std::ifstream;

using std::cout;
using std::endl;

int main() {
    ifstream inFile;
    inFile.open("PE08.txt");

    // Check if the file is successfully opened.
    if (!inFile.is_open()) {
        cout << "Could not open the file PE08.txt" << endl;
        cout << "Program terminating." << endl;
        exit(EXIT_FAILURE);
    }

    char ch;
    int cnt = 0;
    while (inFile >> ch) {
        ++cnt;
    }

    // Check if the file is read to the end.
    if (inFile.eof()) {
        cout << "End of file reached.\n";
    }
    else if (inFile.fail()) {
        cout << "Input terminated by data mismatch.\n";
    }
    else {
        cout << "Input terminated for unknown reason.\n";
    }

    // Show the result
    if (cnt == 0) {
        cout << "No data processed.\n";
    }
    else {
        cout << "The total number of character should be " << cnt << endl;
    }

    inFile.close();

    return 0;
}
