#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	char ch;

	cout << "Please enter one of the following choices:\n";
	cout << "c) carnivore\tp) pianist\n";
	cout << "t) tree\t\tg) game\n";

	while (cin.get(ch)) {
		if (!(ch == 'c' || ch == 'p' || ch == 't' || ch == 'g')) {
			cout << "Please enter a c, p, t, or g: ";
			cin.clear();
			while (cin.get() != '\n')
				continue;
		}
		else {
			switch (ch)
			{
			case 'c':
				cout << "A tiger is a carnivore." << endl;
				break;
			case 'p':
				cout << "Lang lang is a pianist." << endl;
				break;
			case 't':
				cout << "A maple is a tree." << endl;
				break;
			case 'g':
				cout << "FIFA is a game." << endl;
				break;
			default:
				break;
			}
			break;
		}
	}

	return 0;
}