// Programming Exercise 4.9
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    struct CandyBar {
		char brandName[20];
		double weight;
		int calories;
	};

	CandyBar* ptrCandyBar = new CandyBar[3];
	ptrCandyBar[0] = { "Hershey", 2.3, 350 };
	ptrCandyBar[1] = { "Lindt", 1.8, 220 };
	ptrCandyBar[2] = { "Mars", 3.5, 410 };

	cout << "The candy bar's brand name is " << ptrCandyBar[0].brandName
         << ".\nIt is " << ptrCandyBar[0].weight << " pounds.\nAnd, it has "
         << ptrCandyBar[0].calories << " calories.\n" << endl;

    cout << "The candy bar's brand name is " << ptrCandyBar[1].brandName
         << ".\nIt is " << ptrCandyBar[1].weight << " pounds.\nAnd, it has "
         << ptrCandyBar[1].calories << " calories.\n" << endl;

    cout << "The candy bar's brand name is " << ptrCandyBar[2].brandName
         << ".\nIt is " << ptrCandyBar[2].weight << " pounds.\nAnd, it has "
         << ptrCandyBar[2].calories << " calories." << endl;
	delete[] ptrCandyBar;

    return 0;
}