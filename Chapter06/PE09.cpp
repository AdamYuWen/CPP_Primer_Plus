// Programming Exercise 6.9
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using std::string;
using std::ifstream;

using std::cin;
using std::cout;
using std::endl;
using std::getline;

struct Contribution {
    string member;
    double contribution;
};

int main() {
    ifstream inFile;
    inFile.open("PE09.txt");

    if (!inFile.is_open()) {
        cout << "Could not open the file PE09.txt" << endl;
        cout << "Program terminating." << endl;
        exit(EXIT_FAILURE);
    }

	int numContributors;
    (inFile >> numContributors).get();

    Contribution* ptrContribution = new Contribution[numContributors];
    bool* ptrGrandPatrons = new bool[numContributors];
    for (int i = 0; i < numContributors; ++i) {
        getline(inFile, ptrContribution[i].member);
        (inFile >> ptrContribution[i].contribution).get();

        if (ptrContribution[i].contribution > 10000) {
			ptrGrandPatrons[i] = true;
        }
        else {
			ptrGrandPatrons[i] = false;
        }
    }

    int cnt = 0;
    cout << "Grand Patrons: " << endl;
    for (int i = 0; i < numContributors; ++i) {
        if (ptrGrandPatrons[i]) {
            ++cnt;
            cout << "Donor " << ptrContribution[i].member;
            cout << " contributed $" << ptrContribution[i].contribution << ".\n";
        }
    }
    if (cnt == 0) {
        cout << "none." << endl;
    }
    cnt = 0;

    cout << "Patrons: " << endl;
    for (int i = 0; i < numContributors; ++i) {
        if (!ptrGrandPatrons[i]) {
            ++cnt;
            cout << "Donor " << ptrContribution[i].member;
            cout << " contributed $" << ptrContribution[i].contribution << ".\n";
        }
    }
    if (cnt == 0) {
        cout << "none." << endl;
    }

    delete[] ptrContribution;
	delete[] ptrGrandPatrons;

    inFile.close();

    return 0;
}