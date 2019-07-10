// Programming Exercise 8.7
#include <iostream>

using std::cout;
using std::endl;

struct debts {
    char name[50];
    double amount;
};

template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T* arr[], int n);


int main() {
	int things[6] = { 13, 31, 103, 301, 310, 130 };
    struct debts mr_E[3] = { {"Ima Wolfe", 2400.0},
                             {"Ura Foxe", 1300.0},
                             {"Iby Stout", 1800.0} };
    double* pd[3];

    for (int i = 0; i < 3; ++i) {
        pd[i] = &mr_E[i].amount;
    }

    cout << "Listing Mr. E's counts of things:\n";
    cout << SumArray(things, 6) << endl;
    cout << "Listing Mr. E's debts:\n";
    cout << SumArray(pd, 3) << endl;

    return 0;
}

template <typename T>
T SumArray(T arr[], int n) {
    cout << "template A\n";
    T res = arr[0];
    for (int i = 1; i < n; ++i) {
        res += arr[i];
    }
    return res;
}

template <typename T>
T SumArray(T* arr[], int n) {
    cout << "template B\n";
    T res = *arr[0];
    for (int i = 1; i < n; ++i) {
        res += *arr[i];
    }
    return res;
}