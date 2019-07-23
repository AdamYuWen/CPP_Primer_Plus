// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype> // or ctype.h
#include "stack.h"

int main() {
    using namespace std;

    Stack st; // create an empty stack
    char ch;
    customer c;
    double total = 0.0;

    cout << "Please enter A to add a customer,\n"
         << "P to remove a customer, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q') {
        while (cin.get() != '\n') {
            continue;
        }
        if (!isalpha(ch)) {
            cout << '\a';
            continue;
        }
        switch(ch) {
        case 'A':
        case 'a':
            cout << "Enter a customer's fullname: ";
            cin.getline(c.fullname, 35);
            cout << "Enter the customer's payment: ";
            (cin >> c.payment).get();
            if (st.isfull()) {
                cout << "stack already full\n";
            }
            else {
                st.push(c);
            }
            break;
        case 'P':
        case 'p':
            if (st.isempty()) {
                cout << "stack already empty\n";
            }
            else {
                st.pop(c);
                cout << "Customer " << c.fullname << " popped\n";
                total += c.payment;
            }
            break;
        }
        cout << "The total payment is " << total << endl;
        cout << "Please enter A to add a customer,\n"
             << "P to remove a customer, or Q to quit.\n";
    }
    cout << "Bye\n";

    return 0;
}