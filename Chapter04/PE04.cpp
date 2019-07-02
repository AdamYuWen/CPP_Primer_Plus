// Programming Exercise 4.4
#include <iostream>
#include <string>

using std::string;

using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main() {
    string firstName, lastName;

	cout << "Enter your first name: ";
	getline(cin, firstName);
	cout << "Enter your last name: ";
	getline(cin, lastName);
	cout << "Here's the information in a single string: "
         << firstName + ", " + lastName << endl;

    return 0;
}