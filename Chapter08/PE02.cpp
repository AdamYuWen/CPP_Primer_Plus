// Programming Exercise 8.2
#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

const int brandNameSize = 20;

struct CandyBar {
    char brandName[brandNameSize];
    double weight;
    int calories;
};

// To set the default value for brand name, it is better to and const.
// Otherwise, a warning message "ISO C++ forbids converting a string
// constant to 'char*'" will be pop out.
const CandyBar& setCandyBar(CandyBar& candyBar,
                            const char* _brandName = "Millennium Munch",
                            const double _weight = 2.85,
                            const int _calories = 350);
void displayCandyBar(const CandyBar& candyBar);

int main() {
    CandyBar candyBar1;
    cout << "Set the candy bar from default arguments:" << endl;
    setCandyBar(candyBar1);
    displayCandyBar(candyBar1);
    cout << "=========================================" << endl;

    CandyBar candyBar2;
    char iBrandName[brandNameSize];
    double iWeight;
    int iCalories;
    cout << "Please input a candy bar:" << endl;
    cout << "Enter the brand name: ";
    cin.getline(iBrandName, brandNameSize);
    cout << "Enter the weight: ";
    cin >> iWeight;
    cout << "Enter the calories: ";
    cin >> iCalories;
    displayCandyBar(setCandyBar(candyBar2, iBrandName, iWeight, iCalories));

    return 0;
}

const CandyBar& setCandyBar(CandyBar& candyBar,
                            const char* _brandName,
                            const double _weight,
                            const int _calories) {
    strcpy(candyBar.brandName, _brandName);
    candyBar.weight = _weight;
    candyBar.calories = _calories;

    return candyBar;
}

void displayCandyBar(const CandyBar& candyBar) {
    cout << "The information of the candy bar:" << endl;
    cout << "Its brand name is " << candyBar.brandName << endl;
    cout << "Its weight is " << candyBar.weight << endl;
    cout << "Its calories is " << candyBar.calories << endl;
}