// Programming Exercise 12.4
#include <iostream>
#include <cctype>
#include "stack.h"

int main() {
    using std::cout;
    using std::endl;

    cout << "Test constructor:\n";
    Stack st(3);
    cout << "It is empty.\n";

    cout << "\nTest isempty function:\n";
    cout << "Empty?: " << std::boolalpha << st.isempty() << endl;

    cout << "\nTest add function:\n";
    unsigned long temp = 17885;
    st.push(temp);
    temp = 17965;
    st.push(temp);
    temp = 18002;
    st.push(temp);
    cout << st;

    cout << "\nTest isfull function:\n";
    cout << "Full?: " << std::boolalpha << st.isfull() << endl;

    cout << "\nTest pop function:\n";
    temp = 1; // change the temp to a number not equals to 18002
    st.pop(temp); // in the pop function, temp will be assigned to 18002
    cout << "temp = " << temp << endl;
    cout << st;

    // Stack st; // create an empty stack
    // char ch;
    // unsigned long po;

    // cout << "Please enter A to add a customer,\n"
    //      << "P to remove a customer, or Q to quit.\n";
    // while (cin >> ch && toupper(ch) != 'Q') {
    //     while (cin.get() != '\n') {
    //         continue;
    //     }
    //     if (!isalpha(ch)) {
    //         cout << '\a';
    //         continue;
    //     }
    //     switch(ch) {
    //     case 'A':
    //     case 'a':
    //         cout << "Enter a PO number to add: ";
    //         cin >> po;
    //         if (st.isfull()) {
    //             cout << "stack already full\n";
    //         }
    //         else {
    //             st.push(po);
    //         }
    //         break;
    //     case 'P':
    //     case 'p':
    //         if (st.isempty()) {
    //             cout << "stack already empty\n";
    //         }
    //         else {
    //             st.pop(po);
    //             cout << "PO #" << po << " popped\n";
    //         }
    //         break;
    //     }
    //     cout << "Please enter A to add a customer,\n"
    //          << "P to remove a customer, or Q to quit.\n";
    // }
    // cout << "Bye\n";

    return 0;
}