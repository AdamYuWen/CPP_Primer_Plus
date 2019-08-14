// Programming Exercise 14.4
//            Person
//           /      \
// Gunslinger        PokerPlayer
//           \      /
//            BadDude

#include <iostream>
#include <cstring>
#include "person.h"
#include "gunslinger.h"
#include "pokerplayer.h"
#include "baddude.h"

const int SIZE = 5;

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    Person* ptr[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        char choice;
        cout << "Enter the person category:\n"
             << "p: Person\tg:Gunslinger\t"
             << "o: PokerPlayer\tb:BadDude\t"
             << "q: quit\n";
        cin >> choice;
        while (strchr("pgobq", choice) == NULL) {
            cout << "Please enter a p, g, o, b, q: ";
            cin >> choice;
        }
        if (choice == 'q') {
            break;
        } else {
            switch(choice) {
            case 'p': ptr[i] = new Person; break;
            case 'g': ptr[i] = new Gunslinger; break;
            case 'o': ptr[i] = new PokerPlayer; break;
            case 'b': ptr[i] = new BadDude; break;
            }
            cin.get();
            ptr[i]->Set();
        }
    }

    cout << "\nHere are results:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << endl;
        ptr[i]->Show();
    }

    for (int i = 0; i < SIZE; ++i) {
        delete ptr[i];
    }
    cout << "Bye.\n";

    return 0;
}