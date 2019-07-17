// Programming Exercise 10.8
#include <iostream>
#include "list.h"

int main() {
    using std::cout;
    using std::endl;

    cout << "Create a list by using default constructor:" << endl;
    List org1;
    org1.showList();
    cout << "Is it empty?" << endl;
    org1.isempty();

    cout << endl << "Create a list by using constructor:" << endl;
    cout << "   1st time:\n";
    Item temp1[6] = { 1, 2, 3, 4, 5, 6 };
    List org2(temp1, 6);
    cout << "   2nd time:\n";
    Item temp2[4] = { 10, 20, 30, 40 };
    List org3(temp2, 4);
    org3.showList();
    cout << "Is it empty?" << endl;
    org3.isempty();

    cout << endl << "Add a node to the list:" << endl;
    org3.add(50);
    org3.showList();
    org3.add(60);
    org3.showList();

    cout << endl << "Visit a node:" << endl;
    org3.visit(addone);
    org3.showList();

    return 0;
}
