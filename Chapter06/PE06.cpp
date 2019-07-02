// Programming Exercise 6.6
#include <iostream>
#include <string>

using std::string;

using std::cin;
using std::cout;
using std::endl;

struct Contribution {
    string member;
    double contribution;
};

int main() {
    int numContributors;
    cout << "Enter the number of contributors: " << endl;
    (cin >> numContributors).get();

    Contribution* ptrContribution = new Contribution[numContributors];
    bool* ptrGrandPatrons = new bool[numContributors];
    for (int i = 0; i < numContributors; ++i) {
        cout << "Enter the contributor's name: ";
        getline(cin, ptrContribution[i].member);
        cout << "Enter the amount of the contribution: ";
        (cin >> ptrContribution[i].contribution).get();

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

    return 0;
}
