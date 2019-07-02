// Programming Exercise 4.6
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

	CandyBar candyBar[3];
	candyBar[0] = { "Hershey", 2.3, 350 };
	candyBar[1] = { "Lindt", 1.8, 220 };
	candyBar[2] = { "Mars", 3.5, 410 };

	cout << "The candy bar's brand name is " << candyBar[0].brandName
		<< ".\nIt is " << candyBar[0].weight << " pounds.\nAnd, it has "
		<< candyBar[0].calories << " calories.\n" << endl;

	cout << "The candy bar's brand name is " << candyBar[1].brandName
		<< ".\nIt is " << candyBar[1].weight << " pounds.\nAnd, it has "
		<< candyBar[1].calories << " calories.\n" << endl;

	cout << "The candy bar's brand name is " << candyBar[2].brandName
		<< ".\nIt is " << candyBar[2].weight << " pounds.\nAnd, it has "
		<< candyBar[2].calories << " calories." << endl;

    return 0;
}