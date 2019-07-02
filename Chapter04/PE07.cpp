// Programming Exercise 4.7
#include <iostream>
#include <string>

using std::string;

using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main() {
    struct Pizza {
		string name;
		double diameter;
		double weight;
	};

	Pizza onePizza;
	cout << "Please create a pizza:\n";
	cout << "Enter the name of the pizza: ";
	getline(cin, onePizza.name);
	cout << "Enter the diameter of the pizza (inch): ";
	cin >> onePizza.diameter;
	cout << "Enter the weight of the pizza (pound): ";
	cin >> onePizza.weight;

	cout << "The pizza's name is " << onePizza.name
         << ". Its diameter is " << onePizza.diameter << " inches and weight is "
         << onePizza.weight << " pounds." << endl;

    return 0;
}