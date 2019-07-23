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

    cout << "\nTest copy constructor:\n";
    Stack st1 = st;
    cout << st1;

    cout << "\nTest assignment operator:\n";
    Stack st2;
    st2 = st;
    cout << st2;

    cout << "\nTest pop function:\n";
    temp = 1; // change the temp to a number not equals to 18002
    st.pop(temp); // in the pop function, temp will be assigned to 18002
    cout << "temp = " << temp << endl;
    cout << st;

    return 0;
}