#include <iostream>
#include "sales.h"

namespace SALES {
    using std::cin;
    using std::cout;
    using std::endl;

    void setSales(Sales& s, const double arr[], int n) {
        double sum = 0.0;
        s.max = arr[0], s.min = arr[0];
        int size = n > QUARTERS ? QUARTERS : n;
        for (int i = 0; i < size; ++i) {
            s.sales[i] = arr[i];
            sum += arr[i];
            s.max = s.max > arr[i] ? s.max : arr[i];
            s.min = s.min > arr[i] ? arr[i] : s.min;
        }
        s.average = sum / double(size);
    }

    void setSales(Sales& s) {
        double sum = 0.0;
        cout << "Please enter 4 sales for each quater:" << endl;
        for (int i = 0; i < QUARTERS; ++i) {
            cout << "Enter #" << (i + 1) << " sale: ";
            cin >> s.sales[i];
            sum += s.sales[i];

            if (i == 0) {
                s.max = s.sales[i];
                s.min = s.sales[i];
            }
            else {
                s.max = s.max > s.sales[i] ? s.max : s.sales[i];
                s.min = s.min > s.sales[i] ? s.sales[i] : s.min;
            }
        }
        s.average = sum / double(QUARTERS);
    }

    void showSales(const Sales& s) {
        for (int i = 0; i < QUARTERS; ++i) {
            cout << "#" << (i + 1) << " sale is " << s.sales[i] << ".\n";
        }
        cout << "The average sale is " << s.average << ".\n";
        cout << "The maximum sale is " << s.max << ".\n";
        cout << "The minimum sale is " << s.min << ".\n";
    }
}