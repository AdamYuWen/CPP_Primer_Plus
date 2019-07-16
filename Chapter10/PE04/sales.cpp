// sales.cpp -- implementing the Sales class
#include <iostream>
#include "sales.h"

namespace SALES {
    Sales::Sales() {
        sales[0] = sales[1] = sales[2] = sales[3] = 0.0;
        average = max = min = 0.0;
    }

    Sales::Sales(const double arr[], int n) {
        for (int i = 0; i < QUARTERS; ++i) {
            sales[i] = 0.0;
        }

        double sum = 0.0;
        max = arr[0], min = arr[0];
        int size = n > QUARTERS ? QUARTERS : n;
        for (int i = 0; i < size; ++i) {
            sales[i] = arr[i];
            sum += arr[i];
            max = max > arr[i] ? max : arr[i];
            min = min > arr[i] ? arr[i] : min;
        }
        average = sum / double(size);
    }

    Sales::~Sales() {}

    void Sales::setSales() {
        using std::cin;
        using std::cout;
        using std::endl;

        double temp[QUARTERS];

        double sum = 0.0;
        cout << "Please enter 4 sales for each quater:" << endl;
        for (int i = 0; i < QUARTERS; ++i) {
            cout << "Enter #" << (i + 1) << " sale: ";
            cin >> temp[i];
        }
        *this = Sales(temp, QUARTERS);
    }

    void Sales::showSales() const {
        using std::cout;

        for (int i = 0; i < QUARTERS; ++i) {
            cout << "#" << (i + 1) << " sale is " << sales[i] << ".\n";
        }
        cout << "The average sale is " << average << ".\n";
        cout << "The maximum sale is " << max << ".\n";
        cout << "The minimum sale is " << min << ".\n";
    }
}