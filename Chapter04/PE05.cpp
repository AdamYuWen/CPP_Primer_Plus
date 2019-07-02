// Programming Exercise 4.5
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

	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout << "The cany bar's brand name is " << snack.brandName
         << ".\nIt is " << snack.weight << " pounds.\nAnd, it has "
         << snack.calories << " calories." << endl;

    return 0;
}