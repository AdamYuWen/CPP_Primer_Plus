// Programming Exercise 16.4
#include <iostream>
#include <algorithm>
#include <set>

using std::cout;
using std::endl;
using std::sort;
using std::set;

int reduce(long ar[], int n);
void show(long ar[], int n);

int main() {
    long test1[] = { 7, 8, 8, 3, 3, 3, 4, 4, 3, 8 };
    cout << "The reduced size should be 4." << endl;
    cout << "The outcome from reduce is " << reduce(test1, 10) << ".\n";
    cout << "After reduce function, the array becomes to\n";
    show(test1, reduce(test1, 10));
    cout << endl;

    long test2[] = { 12, 12, 5, 6, 11, 5, 6, 77, 11, 12 };
    cout << "The reduced size should be 5." << endl;
    cout << "The outcome from reduce is " << reduce(test2, 10) << ".\n";
    cout << "After reduce function, the array becomes to\n";
    show(test2, reduce(test2, 10));

    return 0;
}

int reduce(long ar[], int n) {
    sort(ar, ar + n);
    set<int> setAr(ar, ar + n);
    int i = 0;
    for (auto element : setAr) {
        ar[i] = element;
        ++i;
    }
    return setAr.size();
}

void show(long ar[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << ar[i] << " ";
    }
    cout << endl;
}